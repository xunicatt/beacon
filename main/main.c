#include <app.h>
#include <esp_check.h>

#define TAG "main"

[[noreturn]]
void app_main(void) {
    ESP_LOGI(TAG, BEACON_OS_NAME " " BEACON_VERSION);
    ESP_LOGI(TAG, BEACON_OS_DESC);

    esp_err_t ret = ESP_OK;
    app_t *a = calloc(1, sizeof(app_t)) ;
    if(a == NULL) {
        ESP_LOGE(TAG, "failed to allocate memory fro app_t");
        goto halt;
    }

    ret = app_init(a);
    ESP_GOTO_ON_ERROR(ret, halt, TAG, "failed to initialize app");

    ret = app_run(a);
    ESP_GOTO_ON_ERROR(ret, halt, TAG, "failed to run app");

halt:
    ESP_LOGE(TAG, "app halted indefinitely");
    while(true) {
        app_delay_sec(1);
    }
}
