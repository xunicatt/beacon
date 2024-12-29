#ifndef __GUI_HOME_H
#define __GUI_HOME_H

#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <esp_err.h>
#include <lvgl.h>
#include <rot_encoder.h>

typedef struct {
    TaskHandle_t task_handle; 
    lv_obj_t* text;
    rot_encoder_t* r;
} gui_home_t;

esp_err_t gui_home_init(gui_home_t* gh, rot_encoder_t* r);
void gui_home_task(void* x);

#endif