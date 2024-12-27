#include "wifi.h"
#include <esp_err.h>
#include <esp_log.h>
#include <esp_check.h>

#define TAG "wifi"

esp_err_t wifi_init(wifi_t* w) {
    assert(w != NULL);
    esp_err_t err = ESP_OK;

    err = esp_netif_init();
    ESP_RETURN_ON_ERROR(err, TAG, "failed to intialize netif");

    err =  esp_event_loop_create_default();
    ESP_RETURN_ON_ERROR(err, TAG, "failed to create event loop");

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

    // for(uint8_t i = 0; i < scan_list_size; i++) {
    //     printf("got wifi: %s\n", w->ap_infos[i].ssid);
    // }

    return ESP_OK;
}