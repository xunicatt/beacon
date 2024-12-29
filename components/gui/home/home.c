#include "home.h"
#include <fonts.h>
#include <rot_encoder.h>

esp_err_t gui_home_init(gui_home_t* gh, rot_encoder_t* r) {
    lv_obj_t* screen = lv_scr_act();
    lv_obj_clean(screen);

    lv_obj_t* label = lv_label_create(screen);
    lv_obj_set_style_bg_color(screen, lv_color_hex(0x005F79), LV_PART_MAIN);
    lv_obj_set_style_text_font(label, &font_dseg14_modern_54, LV_PART_MAIN);
    lv_obj_set_style_text_color(label, lv_color_white(), LV_PART_MAIN);
    lv_label_set_text(label, "000"); 

    gh->text = label;    
    gh->r = r;
    return ESP_OK;
}

void gui_home_task(void* x) {
    gui_home_t* a = x;
    uint8_t val = 0, old_val = 0;
    char data[4] = "000";

    while(true) {
        val = rot_encoder_read(a->r);
        if(val != old_val) {
            old_val = val;
            sprintf(data, (old_val < 10 ? "00%u" : (old_val < 100 ? "0%u" : "%u")), old_val);
            lv_label_set_text(a->text, data); 
        }
        vTaskDelay(10/portTICK_PERIOD_MS);
    }

    vTaskDelete(NULL);
}