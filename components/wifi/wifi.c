#include "wifi.h"
#include <esp_err.h>
#include <esp_log.h>
#include <esp_check.h>
#include <string.h>
#include <config.h>

#define TAG "wifi"

static EventGroupHandle_t wifi_event_group = NULL; 
static uint8_t wifi_connect_retry_count = 0;

static void wifi_event_handler(
    void* arg,
    esp_event_base_t event_base,
    int32_t event_id,
    void* event_data
) {
    esp_err_t err = ESP_OK;
    if(event_base == WIFI_EVENT && event_id == WIFI_EVENT_STA_START) {
        err = esp_wifi_connect();
        ESP_ERROR_CHECK(err);
        return;
    }

    if(event_base == WIFI_EVENT && event_id == WIFI_EVENT_STA_DISCONNECTED) {
        if(wifi_connect_retry_count < WIFI_MAX_RETRY) {
            err = esp_wifi_connect();
            ESP_ERROR_CHECK(err);
            wifi_connect_retry_count++;
            ESP_LOGI(TAG, "trying to reconnect");
            return;
        }

        ESP_LOGW(TAG, "failed to connect to AP after trying for %u times", WIFI_MAX_RETRY);
        xEventGroupSetBits(wifi_event_group, WIFI_FAIL_BIT);
        return;
    }

    if(event_base == IP_EVENT && event_id == IP_EVENT_STA_GOT_IP) {
        ip_event_got_ip_t* event = (ip_event_got_ip_t*)event_data;
        ESP_LOGI(TAG, "got ip:" IPSTR, IP2STR(&event->ip_info.ip));
        wifi_connect_retry_count = 0;
        xEventGroupSetBits(wifi_event_group, WIFI_CONNECTED_BIT);
        return;
    }
}

esp_err_t wifi_init(wifi_t* w) {
    assert(w != NULL);
    esp_err_t err = ESP_OK;

    w->sta_netif = esp_netif_create_default_wifi_sta();
    assert(w->sta_netif != NULL);

    w->cfg = (wifi_init_config_t)WIFI_INIT_CONFIG_DEFAULT();
    err = esp_wifi_init(&w->cfg);
    ESP_RETURN_ON_ERROR(err, TAG, "failed to initialize wifi");

    err = esp_wifi_set_mode(WIFI_MODE_STA);
    ESP_RETURN_ON_ERROR(err, TAG, "failed to set wifi mode");

    err = esp_wifi_start();
    ESP_RETURN_ON_ERROR(err, TAG, "failed to start wifi");

    return ESP_OK;
}

esp_err_t wifi_scan(wifi_t* w) {
    assert(w != NULL);
    esp_err_t err = ESP_OK;

#if CHANNEL_LIST_SIZE
    wifi_scan_config_t* scan_cfg = (wifi_scan_config_t*)calloc(1, sizeof(wifi_scan_config_t));
    uint8_t channel_list[CHANNEL_LIST_SIZE] = CHANNEL_LIST;
    for(uint8_t i = 0; i < sizeof(channel_list); i++) {
        scan_cfg->channel_bitmap.ghz_2_channels |= (1 << (channel_list[i]));
    } 
    err = esp_wifi_scan_start(scan_cfg, true);
    free(scan_cfg);
#else
    err = esp_wifi_scan_start(NULL, true);
#endif
    ESP_RETURN_ON_ERROR(err, TAG, "failed to start wifi scanning");

    err = esp_wifi_scan_get_ap_num(&w->ap_count);
    ESP_RETURN_ON_ERROR(err, TAG, "failed to get ap count");

    uint16_t scan_list_size = SCAN_LIST_SIZE;
    err = esp_wifi_scan_get_ap_records(&scan_list_size, w->ap_infos);
    ESP_RETURN_ON_ERROR(err, TAG, "failed to get ap records");

    return ESP_OK;
}

esp_err_t wifi_connect(wifi_t* w, wifi_ap_record_t* ap, const char* passwd) {
    esp_err_t err = ESP_OK;
    err = esp_wifi_stop();
    ESP_RETURN_ON_ERROR(err, TAG, "failed to stop wifi");
    
    wifi_event_group = xEventGroupCreate();
    esp_event_handler_instance_t instance_any_id = NULL, instance_got_ip = NULL;
    
    err = esp_event_handler_instance_register(
        WIFI_EVENT,
        ESP_EVENT_ANY_ID,
        &wifi_event_handler,
        NULL,
        &instance_any_id
    );
    ESP_RETURN_ON_ERROR(err, TAG, "failed to register event handler");

    err = esp_event_handler_instance_register(
        IP_EVENT,
        IP_EVENT_STA_GOT_IP,
        &wifi_event_handler,
        NULL,
        &instance_got_ip
    );
    ESP_RETURN_ON_ERROR(err, TAG, "failed to register event handler");

    wifi_config_t wifi_config = {0};
    wifi_config.sta.threshold.authmode = ap->authmode;
    strncpy((char*)wifi_config.sta.ssid, (char*)ap->ssid, sizeof(wifi_config.sta.ssid));

    if(passwd != NULL && strlen(passwd) > 0) {
        strncpy((char*)wifi_config.sta.password, (char*)passwd, sizeof(wifi_config.sta.password));
    } 

    err = esp_wifi_set_mode(WIFI_MODE_STA);
    ESP_RETURN_ON_ERROR(err, TAG, "failed to set wifi mode");

    err = esp_wifi_set_config(WIFI_IF_STA, &wifi_config);
    ESP_RETURN_ON_ERROR(err, TAG, "failed to set wifi config");

    err = esp_wifi_start();
    ESP_RETURN_ON_ERROR(err, TAG, "failed to start wifi");

    ESP_LOGI(TAG, "wifi init");

    EventBits_t bits = xEventGroupWaitBits(
        wifi_event_group,
        WIFI_CONNECTED_BIT | WIFI_FAIL_BIT,
        pdFALSE,
        pdFALSE,
        portMAX_DELAY
    );

    if(bits & WIFI_CONNECTED_BIT) {
        ESP_LOGI(TAG, "connected to SSID: %s", ap->ssid);
        return ESP_OK;
    }

    if(bits & WIFI_FAIL_BIT) {
        ESP_LOGW(TAG, "failed to connect to ssid %s", ap->ssid);
        return ESP_ERR_WIFI_NOT_CONNECT;
    }

    ESP_LOGE(TAG, "unexpected event");
    return ESP_ERR_NOT_SUPPORTED;
}