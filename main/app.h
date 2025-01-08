#ifndef __APP_H
#define __APP_H

#include <esp_err.h>
#include <config.h>
#include <ws2812b.h>
#include <st7789.h>
#include <rot_encoder.h>
#include <wifi.h>
#include <boot.h>
#include <home.h>

typedef struct {
    ws2812b_t led;
    st7789_t display;
    rot_encoder_t rot;
    wifi_t wifi;
    struct {
        gui_boot_t boot; 
        gui_home_t home;
        TaskHandle_t handler;
    } gui;
} app_t;


esp_err_t app_init(app_t* a);
esp_err_t app_run(app_t* a);

#endif