#ifndef __APP_H
#define __APP_H

#include <esp_err.h>
#include <config.h>
#include <ws2812b.h>
#include <st7789.h>
#include <rot_encoder.h>

typedef struct {
    ws2812b_t led;
    st7789_t display;
    rot_encoder_t rot;
} app_t;


esp_err_t app_init(app_t* a);
esp_err_t app_run(app_t* a);

#endif