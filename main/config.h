#ifndef __APP_CONFIG_H
#define __APP_CONFIG_H

#include <driver/gpio.h>
#include <driver/spi_master.h>
#include <freertos/task.h>

#define DRIVER_WS2812B_DIN GPIO_NUM_21
#define DRIVER_WS2812B_SPI_HOST SPI2_HOST
#define DRIVER_WS2812B_SPI_DMA_CH SPI_DMA_CH_AUTO
#define DRIVER_WS2812B_LED_COUNT SPI_DMA_CH_AUTO

#define DRIVER_ST7789_VRES 240
#define DRIVER_ST7789_HRES 240
#define DRIVER_ST7789_MOSI GPIO_NUM_11
#define DRIVER_ST7789_SCLK GPIO_NUM_12
#define DRIVER_ST7789_DC GPIO_NUM_36
#define DRIVER_ST7789_RST GPIO_NUM_35
#define DRIVER_ST7789_BCLK GPIO_NUM_37
#define DRIVER_ST7789_SPI_HOST SPI3_HOST

#define DRIVER_ROT_ENCODER_A GPIO_NUM_33
#define DRIVER_ROT_ENCODER_B GPIO_NUM_34
#define DRIVER_ROT_ENCODER_SW GPIO_NUM_NC

#define TASK_GUI_MAX_DELAY (16/portTICK_PERIOD_MS)
#define TASK_ROT_ENCODER_MAX_DELAY (10/portTICK_PERIOD_MS)
#define TASK_MAIN_GUI_UPDATE (10/portTICK_PERIOD_MS)

#define app_delay_ms(x) ((x)/portTICK_PERIOD_MS)
#define app_delay_sec(x) app_delay_ms((x)*1000)
#define app_delay_min(x) app_delay_sec((x)*60)
#define app_delay_hrs(x) app_delay_min((x)*60)

#endif