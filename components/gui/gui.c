#include "gui.h"
#include <lvgl.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

void gui_handler(void*) {
    while(true) {
        lv_task_handler();
        vTaskDelay(100/portTICK_PERIOD_MS);
    }

    vTaskDelete(NULL);
}