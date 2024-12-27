#include <app.h>
#include <nvs_flash.h>
#include <fonts.h>
#include <lvgl.h>

#define TAG "beacon"

void boot_gui(void*) {
    // main container
    lv_obj_t* screen = lv_scr_act();
    lv_obj_set_layout(screen, LV_LAYOUT_FLEX);
    lv_obj_set_flex_flow(screen, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(screen, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_set_style_bg_color(screen, lv_color_hex(0x005F79), LV_PART_MAIN);  
    lv_obj_set_style_pad_gap(screen, 10, LV_PART_MAIN);

    // beaconOS text
    lv_obj_t* label = lv_label_create(screen);
    lv_obj_set_style_text_color(label, lv_color_hex(0xAEDB45), LV_PART_MAIN);
    lv_obj_set_style_text_font(label, &lv_font_montserrat_32, LV_PART_MAIN);
    lv_label_set_text(label, "beaconOS");

    // loading dots container
    lv_obj_t *loading_cont = lv_obj_create(screen);
    lv_obj_set_height(loading_cont, 20);
    lv_obj_set_width(loading_cont, LV_VER_RES);
    lv_obj_set_layout(loading_cont, LV_LAYOUT_FLEX);
    lv_obj_set_flex_flow(loading_cont, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(loading_cont, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_set_style_bg_color(loading_cont, lv_color_hex(0x005F79), LV_PART_MAIN);  
    lv_obj_set_style_pad_gap(loading_cont, 20, LV_PART_MAIN);
    lv_obj_set_style_border_side(loading_cont, LV_BORDER_SIDE_NONE, LV_PART_MAIN);

    // loading dots
    lv_obj_t* cir[6] =  {
        lv_obj_create(loading_cont),
        lv_obj_create(loading_cont),
        lv_obj_create(loading_cont),
        lv_obj_create(loading_cont),
        lv_obj_create(loading_cont),
        lv_obj_create(loading_cont),
    };

    // reseting the dots
    for(uint8_t i = 0; i < 6; i++) {
        lv_obj_set_height(cir[i], 10);
        lv_obj_set_width(cir[i], 10);
        lv_obj_set_style_border_side(cir[i], LV_BORDER_SIDE_NONE, LV_PART_MAIN);
        lv_obj_set_style_radius(cir[i], LV_RADIUS_CIRCLE, LV_PART_MAIN);
        lv_obj_set_style_bg_color(cir[i], lv_color_hex(0x005F79), LV_PART_MAIN);
    }

    // anim
    uint8_t i = 0;
    while(true) {
        if(i == 6) {
            for(uint8_t x = 0; x < 6; x++) {
                lv_obj_set_style_bg_color(cir[x], lv_color_hex(0x005F79), LV_PART_MAIN);
                app_delay_ms(150);
            }

            i = 0;
            continue;
        }

        lv_obj_set_style_bg_color(cir[i++], lv_color_hex(0xAEDB45), LV_PART_MAIN);
        app_delay_ms(250);
    }

    vTaskDelete(NULL);
}

esp_err_t app_init(app_t* a) {
    esp_err_t err = ESP_OK;
    err = nvs_flash_init();
    ESP_RETURN_ON_ERROR(err, TAG, "failed to initialize nvs storage");

    err = wifi_init(&a->wifi);
    ESP_RETURN_ON_ERROR(err, TAG, "failed to initialize wifi");

    err = wifi_scan(&a->wifi);
    ESP_RETURN_ON_ERROR(err, TAG, "failed to scan wifi");

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
    // TaskHandle_t boot_gui_task = NULL;
    // xTaskCreate(
    //     boot_gui,
    //     "boot_gui_task",
    //     8192 * 2,
    //     NULL,
    //     0,
    //     &boot_gui_task
    // );
    boot_gui(NULL);

    while(true) {
        lv_task_handler();
        lv_timer_handler();
        app_delay_ms(16);
    }

    return err;
}