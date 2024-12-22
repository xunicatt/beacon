#ifndef __DRIVER_WS2812B_H
#define __DRIVER_WS2812B_H

#include <esp_err.h>
#include <driver/gpio.h>
#include <driver/spi_master.h>

typedef struct {
    size_t led_count;
    gpio_num_t pin;
    struct {
        spi_host_device_t host;
        spi_device_handle_t handle;
        spi_dma_chan_t dma_chanel;
        spi_device_interface_config_t dev_cfg;
        spi_bus_config_t bus_cfg;
    } spi_config;
    uint16_t* dma_buffer;
    uint32_t* table;
} ws2812b_t;

esp_err_t ws2812b_init(
    ws2812b_t* w,
    gpio_num_t pin,
    size_t led_count,
    spi_host_device_t spi_host,
    spi_dma_chan_t dma_channel
);

void ws2812b_deinit(ws2812b_t* w);
void ws2812b_set_color(ws2812b_t* w, uint32_t col);
esp_err_t ws2812b_update(ws2812b_t* w);

#endif