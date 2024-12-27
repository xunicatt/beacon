#include <app.h>
#include <nvs_flash.h>
#include <fonts.h>
#include <lvgl.h>
#include <boot.h>

#define TAG "beacon"

esp_err_t app_init(app_t* a) {
    esp_err_t err = ESP_OK;
    err = ws2812b_init(
        &a->led,
        DRIVER_WS2812B_DIN,
        DRIVER_WS2812B_LED_COUNT,
        DRIVER_WS2812B_SPI_HOST,
        DRIVER_WS2812B_SPI_DMA_CH
    );
    ESP_RETURN_ON_ERROR(err, TAG, "failed tp initialize ws2812b");
    ws2812b_set_color(&a->led, 0x001000);
    ws2812b_update(&a->led);

    err = st7789_init(
        &a->display,
        DRIVER_ST7789_HRES,
        DRIVER_ST7789_VRES,
        DRIVER_ST7789_MOSI,
        DRIVER_ST7789_SCLK,
        DRIVER_ST7789_DC,
        DRIVER_ST7789_RST,
        DRIVER_ST7789_SPI_HOST
    );
    ESP_RETURN_ON_ERROR(err, TAG, "failed to initialize st7789");

    err = nvs_flash_init();
    ESP_RETURN_ON_ERROR(err, TAG, "failed to initialize nvs storage");

    err = wifi_init(&a->wifi);
    ESP_RETURN_ON_ERROR(err, TAG, "failed to initialize wifi");

    err = wifi_scan(&a->wifi);
    ESP_RETURN_ON_ERROR(err, TAG, "failed to scan wifi");

    err = rot_encoder_init(
        &a->rot,
        DRIVER_ROT_ENCODER_A,
        DRIVER_ROT_ENCODER_B,
        DRIVER_ROT_ENCODER_SW,
        NULL
    );
    ESP_RETURN_ON_ERROR(err, TAG, "failed to initialize rotary encoder");

    return err;
}

esp_err_t app_run(app_t* a) {
    esp_err_t err = ESP_OK;
    gui_boot_t gb = {0};
    gui_boot_init(&gb);

    xTaskCreate(
        gui_boot_task,
        "gui_boot_task",
        4096 * 2,
        &gb,
        1,
        &gb.task_handle
    );

    while(true) {
        lv_task_handler();
        app_delay_ms(16);
    }

    return err;
}