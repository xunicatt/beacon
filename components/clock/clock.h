#ifndef __TIME_H
#define __TIME_H

#include <esp_err.h>

esp_err_t clock_init();
void clock_wait_for_sync();
const char* clock_get_time_str();
const char* clock_get_date_str(); 
struct tm clock_get();

#endif