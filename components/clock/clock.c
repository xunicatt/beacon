#include "time.h"
#include <esp_log.h>
#include <config.h>
#include <time.h>
#include <sys/time.h>
#include <esp_sntp.h>

#define TAG "clock"
#define TIME_BUFFER_SIZE 9
#define DATE_BUFFER_SIZE 11

static char clock_time_buffer[TIME_BUFFER_SIZE] = "00:00:00";
static char clock_date_buffer[DATE_BUFFER_SIZE] = "0000/00/00";

static void clock_time_sync_notification_cb(struct timeval* tv) {
    settimeofday(tv, NULL);
    ESP_LOGI(TAG, "system time got synchronized");
    esp_sntp_set_sync_status(SNTP_SYNC_STATUS_COMPLETED);
}

esp_err_t clock_init() {
    setenv("TZ", SNTP_TIME_ZONE, 1);
    tzset();
    ESP_LOGI(TAG, "set system timezone to: %s", SNTP_TIME_SERVER);
    esp_sntp_setoperatingmode(SNTP_OPMODE_POLL);
    esp_sntp_setservername(0, SNTP_TIME_SERVER);
    esp_sntp_set_time_sync_notification_cb(&clock_time_sync_notification_cb);
    esp_sntp_set_sync_interval(SNTP_UPDATE_INTERVAL);
    esp_sntp_init();
    ESP_LOGI(TAG, "initialized sntp");
    return ESP_OK;
}

void clock_wait_for_sync() {
    ESP_LOGI(TAG, "waiting for clock to synchronized");

    uint count = 0;
    while(esp_sntp_get_sync_status() != SNTP_SYNC_STATUS_COMPLETED && count < SNTP_MAX_RETRY_COUNT) {
        vTaskDelay(2500/portTICK_PERIOD_MS);
        count++;
    }

    if(count >= SNTP_MAX_RETRY_COUNT) {
        ESP_LOGE(TAG, "failed to synchornized clock");
    }
}

const char* clock_get_time_str() {
    time_t now = {0};
    struct tm timeinfo = {0};
    time(&now);
    localtime_r(&now, &timeinfo);
    strftime(clock_time_buffer, TIME_BUFFER_SIZE, "%H:%M:%S", &timeinfo);
    return clock_time_buffer;
}

const char* clock_get_date_str() {
    time_t now = {0};
    struct tm timeinfo = {0};
    time(&now);
    localtime_r(&now, &timeinfo);
    strftime(clock_date_buffer, DATE_BUFFER_SIZE, "%Y/%m/%d", &timeinfo);
    return clock_date_buffer;
} 

struct tm clock_get() {
    time_t now = {0};
    struct tm timeinfo = {0};
    time(&now);
    localtime_r(&now, &timeinfo);
    return timeinfo;
}