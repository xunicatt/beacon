#include <app.h>

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
    lv_obj_set_style_bg_color(lv_scr_act(), lv_color_hex(0xff0000), LV_PART_MAIN);
    return err;
}