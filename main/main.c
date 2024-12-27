#include <app.h>

void app_main(void) {
    ESP_LOGI("main", BEACON_OS_NAME " " BEACON_VERSION);
    ESP_LOGI("main", BEACON_OS_DESC);

    esp_err_t err = ESP_OK;
    app_t *a = calloc(1, sizeof(app_t)) ;

    err = app_init(a);
    ESP_ERROR_CHECK(err);

    err = app_run(a);
    ESP_ERROR_CHECK(err);
}
