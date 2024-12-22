#include <app.h>

void app_main(void) {
    esp_err_t err = ESP_OK;
    app_t a;

    err = app_init(&a);
    ESP_ERROR_CHECK(err);

    err = app_run(&a);
    ESP_ERROR_CHECK(err);
}
