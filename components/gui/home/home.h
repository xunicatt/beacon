#ifndef __GUI_HOME_H
#define __GUI_HOME_H

#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <esp_err.h>
#include <lvgl.h>
#include <rot_encoder.h>

typedef struct {
    TaskHandle_t handler; 
    struct {
        struct {
            lv_obj_t* hr;
            lv_obj_t* min;
            lv_obj_t* sec;
            lv_obj_t* per;
        } clock;
    } childs;
} gui_home_t;

esp_err_t gui_home_init(gui_home_t* gh);
void gui_home_task(void* x);

#endif