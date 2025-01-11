#include "home.h"
#include <fonts.h>
#include <rot_encoder.h>
#include <time.h>
#include <clock.h>

esp_err_t gui_home_init(gui_home_t* gh) {
    assert(gh != NULL);
    lv_obj_t* screen = lv_scr_act();
    lv_obj_clean(screen);

    // main container for clock
    lv_obj_t* clock_cont = lv_obj_create(screen);
    lv_obj_set_width(clock_cont, LV_VER_RES);
    lv_obj_set_layout(clock_cont, LV_LAYOUT_FLEX);
    lv_obj_set_flex_flow(clock_cont, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(clock_cont, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_set_style_bg_color(clock_cont, lv_color_hex(0x005F79), LV_PART_MAIN);  
    lv_obj_set_style_pad_gap(clock_cont, 0, LV_PART_MAIN);
    lv_obj_set_style_border_side(clock_cont, LV_BORDER_SIDE_NONE, LV_PART_MAIN);

    // hour label
    lv_obj_t* hr = lv_label_create(clock_cont);
    lv_obj_set_style_text_font(hr, &font_dseg14_modern_40, LV_PART_MAIN);
    lv_obj_set_style_text_color(hr, lv_color_white(), LV_PART_MAIN);
    lv_label_set_text(hr, "00"); 

    // min label
    lv_obj_t* min = lv_label_create(clock_cont);
    lv_obj_set_style_text_font(min, &font_dseg14_modern_40, LV_PART_MAIN);
    lv_obj_set_style_text_color(min, lv_color_white(), LV_PART_MAIN);
    lv_label_set_text(min, ":00"); 

    // period[am/pm] and second container
    lv_obj_t* per_sec_cont = lv_obj_create(clock_cont);    
    lv_obj_set_size(per_sec_cont, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
    lv_obj_set_layout(per_sec_cont, LV_LAYOUT_FLEX);
    lv_obj_set_flex_flow(per_sec_cont, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_bg_color(per_sec_cont, lv_color_hex(0x005F79), LV_PART_MAIN);  
    lv_obj_set_flex_align(per_sec_cont, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_set_style_pad_all(per_sec_cont, 0, LV_PART_MAIN);
    lv_obj_set_style_border_side(per_sec_cont, LV_BORDER_SIDE_NONE, LV_PART_MAIN);

    // period label
    lv_obj_t* per = lv_label_create(per_sec_cont);
    lv_obj_set_style_text_font(per, &font_dseg14_modern_18, LV_PART_MAIN);
    lv_obj_set_style_text_color(per, lv_color_white(), LV_PART_MAIN);
    lv_label_set_text(per, "XX"); 

    // second label
    lv_obj_t* sec = lv_label_create(per_sec_cont);
    lv_obj_set_style_text_font(sec, &font_dseg14_modern_18, LV_PART_MAIN);
    lv_obj_set_style_text_color(sec, lv_color_white(), LV_PART_MAIN);
    lv_label_set_text(sec, ":00"); 

    gh->childs.clock.hr = hr;
    gh->childs.clock.min = min;
    gh->childs.clock.sec = sec;
    gh->childs.clock.per = per;

    return ESP_OK;
}

void gui_home_task(void* x) {
    assert(x != NULL);
    gui_home_t* gh = x;
    struct tm t = {0};
    char shr[3] = "00", smin[4] = ":00", ssec[4] = ":00", sper[3] = "XX";
    uint8_t hr = 0, min = 0, sec = 0;

    sec = clock_get().tm_sec;
    while(((t = clock_get()).tm_sec % 10) != (sec % 10));
    sec = 0;

    while(true) {       
        if(t.tm_sec != sec) {
            sec = t.tm_sec;
            strftime(ssec, sizeof(ssec), ":%S", &t);
            lv_label_set_text(gh->childs.clock.sec, ssec);
        }

        if(t.tm_min != min) {
            min = t.tm_min;
            strftime(smin, sizeof(smin), ":%M", &t);
            lv_label_set_text(gh->childs.clock.min, smin);
        }

        if(t.tm_hour != hr) {
            hr = t.tm_hour;
            strftime(shr, sizeof(shr), "%I", &t);
            lv_label_set_text(gh->childs.clock.hr, shr);

            strftime(sper, sizeof(sper), "%p", &t);
            lv_label_set_text(gh->childs.clock.per, sper);
        }

        vTaskDelay(1000/portTICK_PERIOD_MS);
        t = clock_get();
    }

    vTaskDelete(NULL);
}