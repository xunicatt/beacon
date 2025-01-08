#include "boot.h"

esp_err_t gui_boot_init(gui_boot_t* gb) {
    assert(gb != NULL);
    gb->handler= NULL;
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
    lv_obj_set_height(loading_cont, 40);
    lv_obj_set_width(loading_cont, LV_VER_RES);
    lv_obj_set_layout(loading_cont, LV_LAYOUT_FLEX);
    lv_obj_set_flex_flow(loading_cont, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(loading_cont, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_set_style_bg_color(loading_cont, lv_color_hex(0x005F79), LV_PART_MAIN);  
    lv_obj_set_style_pad_gap(loading_cont, 20, LV_PART_MAIN);
    lv_obj_set_style_border_side(loading_cont, LV_BORDER_SIDE_NONE, LV_PART_MAIN);

    // loading dots
    for(uint8_t i = 0; i < GUI_BOOT_LOADING_CIRCLES_COUNT; i++) {
        gb->loading_circles[i] = lv_obj_create(loading_cont);
    }
       
    // reseting the dots
    for(uint8_t i = 0; i < GUI_BOOT_LOADING_CIRCLES_COUNT; i++) {
        lv_obj_set_height(gb->loading_circles[i], 10);
        lv_obj_set_width(gb->loading_circles[i], 10);
        lv_obj_set_style_border_side(gb->loading_circles[i], LV_BORDER_SIDE_NONE, LV_PART_MAIN);
        lv_obj_set_style_radius(gb->loading_circles[i], LV_RADIUS_CIRCLE, LV_PART_MAIN);
        lv_obj_set_style_bg_color(gb->loading_circles[i], lv_color_hex(0x005F79), LV_PART_MAIN);
    }

    return ESP_OK;
}

void gui_boot_task(void* x) {
    assert(x != NULL);
    // anim
    lv_obj_t** cir= ((gui_boot_t*)x)->loading_circles;
    uint8_t i = 0;
    while(true) {
        if(i == GUI_BOOT_LOADING_CIRCLES_COUNT) {
            for(uint8_t x = 0; x < GUI_BOOT_LOADING_CIRCLES_COUNT; x++) {
                lv_obj_set_style_bg_color(cir[x], lv_color_hex(0x005F79), LV_PART_MAIN);
                vTaskDelay(150/portTICK_PERIOD_MS);
            }

            i = 0;
            continue;
        }

        lv_obj_set_style_bg_color(cir[i++], lv_color_hex(0xAEDB45), LV_PART_MAIN);
        vTaskDelay(250/portTICK_PERIOD_MS);
    }

    vTaskDelete(NULL);
}
