#include "rot_encoder.h"

#define TAG "rot_encoder"

esp_err_t rot_encoder_init(
    rot_encoder_t* r,
    gpio_num_t a,
    gpio_num_t b,
    gpio_num_t sw,
    void (*sw_callback_func)(void*)
) {
    assert(r != NULL);
    assert(a > 0);
    assert(b > 0);
    // assert(sw != GPIO_NUM_NC && sw_callback_func != NULL);
    r->pins.a = a;
    r->pins.b = b;
    r->pins.sw = sw;
    r->callback = sw_callback_func;
    r->data.ab_old = 0;
    r->data.ab_new = 0;
    r->old_value = 0;
    r->value = 0;

    gpio_config_t rot_input_pins = {
        .mode = GPIO_MODE_INPUT,
        .pin_bit_mask = 1ULL << r->pins.a | 1ULL << r->pins.b,
        .pull_up_en = GPIO_PULLUP_ENABLE
    };

    if(r->pins.sw > 0) {
        rot_input_pins.pin_bit_mask |= (1ULL << r->pins.sw);
    }

    esp_err_t err = ESP_OK;
    err = gpio_config(&rot_input_pins);
    ESP_RETURN_ON_ERROR(err, TAG, "failed to set gpio input pins");
    return ESP_OK;
}

uint8_t rot_encoder_read(rot_encoder_t* r) {
    assert(r != NULL);

    r->data.ab_new = (
        (gpio_get_level(r->pins.a) << 1) |
        gpio_get_level(r->pins.b)
    );

    uint8_t c = r->data.ab_new ^ r->data.ab_old;

    if(c == 1 || c == 2) {
        if (0x66 & (1 << (2*r->data.ab_old + r->data.ab_new/2))) {
            r->value++;
        } else {
            r->value--;
        }
    }
    
    r->data.ab_old = r->data.ab_new;
    if(r->old_value != r->value) {
        r->old_value = r->value;
    }
     
    return r->old_value;
}
