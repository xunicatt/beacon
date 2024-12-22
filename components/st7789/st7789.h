#ifndef __DRIVER_ST7789_H
#define __DRIVER_ST7789_H

#include <esp_lvgl_port.h>
#include <esp_lcd_panel_st7789.h>
#include <driver/gpio.h>
#include <driver/spi_master.h>
#include <lvgl.h>
#include <esp_err.h>

typedef struct {
    struct {
        lvgl_port_cfg_t lvgl_cfg;
        lvgl_port_display_cfg_t disp_cfg;
        lv_display_t* disp;
    } lvgl;
    struct {
        esp_lcd_panel_io_handle_t io_handle;
        esp_lcd_panel_io_spi_config_t spi_cfg;
        esp_lcd_panel_handle_t panel_handle;
        esp_lcd_panel_dev_config_t dev_cfg;
    } esp_lcd;
    struct {
        spi_bus_config_t bus_cfg;
    } spi;
} st7789_t;

esp_err_t st7789_init(
    st7789_t* s,
    uint16_t hres,
    uint16_t vres,
    gpio_num_t mosi,
    gpio_num_t sclk,
    gpio_num_t dc,
    gpio_num_t reset,
    spi_host_device_t host
);

#endif