#ifndef __DRIVER_ROT_ENCODER
#define __DRIVER_ROT_ENCODER

#include <esp_err.h>
#include <esp_check.h>
#include <esp_log.h>
#include <driver/gpio.h>

typedef struct {
    struct {
        gpio_num_t a;
        gpio_num_t b;
        gpio_num_t sw;
    } pins;
    void (*callback)(void*);
    struct {
        uint8_t ab_new;
        uint8_t ab_old;
    } data;

    uint8_t value;
    uint8_t old_value;
} rot_encoder_t;


esp_err_t rot_encoder_init(
    rot_encoder_t* r,
    gpio_num_t a,
    gpio_num_t b,
    gpio_num_t sw,
    void (*sw_callback_func)(void*)
);
uint8_t rot_encoder_read(rot_encoder_t* r);

#endif