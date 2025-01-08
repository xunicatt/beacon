#ifndef __GUI_BOOT_H
#define __GUI_BOOT_H

#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <esp_err.h>
#include <lvgl.h>
#include <config.h>

typedef struct {
   TaskHandle_t handler; 
    lv_obj_t* loading_circles[GUI_BOOT_LOADING_CIRCLES_COUNT];
} gui_boot_t;

esp_err_t gui_boot_init(gui_boot_t* gb);
void gui_boot_task(void* x);

#endif