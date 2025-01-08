#include <app.h>
#include <nvs_flash.h>
#include <fonts.h>
#include <lvgl.h>
#include <boot.h>

#define TAG "beacon"
// temporary hard coded
#define WIFI_PASS "Aniket#2003@2024"

static TaskHandle_t gui_handler_task = NULL;

static void gui_handler(void*) {
    while(true) {
        lv_task_handler();
        app_delay_ms(100);
    }

    vTaskDelete(NULL);
}

esp_err_t app_init(app_t* a) {
    esp_err_t err = ESP_OK;
    err = ws2812b_init(
        &a->led,
        DRIVER_WS2812B_DIN,
        DRIVER_WS2812B_LED_COUNT,
        DRIVER_WS2812B_SPI_HOST,
        DRIVER_WS2812B_SPI_DMA_CH
    );
    ESP_RETURN_ON_ERROR(err, TAG, "failed to initialize ws2812b");
    ws2812b_set_color(&a->led, 0x001000);
    err = ws2812b_update(&a->led);
    ESP_RETURN_ON_ERROR(err, TAG, "failed to update color in ws2812b");

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

    // wait for sometimes to let the display intialize
    app_delay_sec(1);

    xTaskCreatePinnedToCore(
        gui_handler,
        "gui_handler",
        2048 * 2,
        NULL, 
        0,
        &gui_handler_task,
        1
    );

    err = gui_boot_init(&a->gui_screens.boot);
    ESP_RETURN_ON_ERROR(err, TAG, "failed to initialize gui_boot");
    xTaskCreate(
        gui_boot_task,
        "gui_boot_task",
        2048 * 2,
        &a->gui_screens.boot,
        2,
        &a->gui_screens.boot.task_handle
    );

    err = nvs_flash_init();
    ESP_RETURN_ON_ERROR(err, TAG, "failed to initialize nvs storage");

    err = wifi_init(&a->wifi);
    ESP_RETURN_ON_ERROR(err, TAG, "failed to initialize wifi");

    err = wifi_scan(&a->wifi);
    ESP_RETURN_ON_ERROR(err, TAG, "failed to scan wifi");

    err = wifi_connect(&a->wifi, &a->wifi.ap_infos[0], WIFI_PASS);
    ESP_RETURN_ON_ERROR(err, TAG, "failed to connect to wifi");

    err = rot_encoder_init(
        &a->rot,
        DRIVER_ROT_ENCODER_A,
        DRIVER_ROT_ENCODER_B,
        DRIVER_ROT_ENCODER_SW,
        NULL
    );
    ESP_RETURN_ON_ERROR(err, TAG, "failed to initialize rotary encoder");

    return ESP_OK;
}

esp_err_t app_run(app_t* a) {
    esp_err_t err = ESP_OK;
    vTaskDelete(a->gui_screens.boot.task_handle);

    err = gui_home_init(&a->gui_screens.home, &a->rot);
    ESP_RETURN_ON_ERROR(err, TAG, "failed to initialize gui_home");
    xTaskCreatePinnedToCore(
        gui_home_task,
        "gui_home_task",
        2048 * 2,
        &a->gui_screens.home,
        0,
        &a->gui_screens.home.task_handle,
        1
    );
  
    while(true) {
        app_delay_sec(1);
    }

    return ESP_OK;
}