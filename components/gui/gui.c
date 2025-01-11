#include "gui.h"
#include <lvgl.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

void gui_handler(void*) {
    while(true) {
        vTaskDelay(lv_task_handler()/portTICK_PERIOD_MS);
    }

    vTaskDelete(NULL);
}