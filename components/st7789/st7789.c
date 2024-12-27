#include "st7789.h"
#include <esp_log.h>
#include <esp_check.h>

#define TAG "st7789"

esp_err_t st7789_init(
    st7789_t* s,
    uint16_t hres,
    uint16_t vres,
    gpio_num_t mosi,
    gpio_num_t sclk,
    gpio_num_t dc,
    gpio_num_t reset,
    spi_host_device_t host
) {
    assert(s != NULL);
    s->lvgl.lvgl_cfg = (lvgl_port_cfg_t)ESP_LVGL_PORT_INIT_CONFIG();
    s->esp_lcd.io_handle = NULL;
    s->spi.bus_cfg = (spi_bus_config_t) {
        .max_transfer_sz = ((hres * vres)/10)*sizeof(lv_color_t),
        .miso_io_num = GPIO_NUM_NC,
        .mosi_io_num = mosi,
        .quadhd_io_num = GPIO_NUM_NC,
        .quadwp_io_num = GPIO_NUM_NC,
        .sclk_io_num = sclk,
    };
    s->esp_lcd.spi_cfg = (esp_lcd_panel_io_spi_config_t) {
        .cs_gpio_num = GPIO_NUM_NC,
        .dc_gpio_num = dc,
        .lcd_cmd_bits = 8,
        .lcd_param_bits = 8,
        .pclk_hz = SPI_MASTER_FREQ_40M,
        .spi_mode = 3,
        .trans_queue_depth = 10 
    };
    s->esp_lcd.panel_handle = NULL;
    s->esp_lcd.dev_cfg = (esp_lcd_panel_dev_config_t) {
        .bits_per_pixel = 16,
        .color_space = ESP_LCD_COLOR_SPACE_RGB,
        .reset_gpio_num = reset,
    };
    
    esp_err_t err = ESP_OK;

    err = lvgl_port_init(&s->lvgl.lvgl_cfg);
    ESP_RETURN_ON_ERROR(err, TAG, "failed to intialize lvgl port");     
    ESP_LOGI(TAG, "intialized lvgl_port");

    err = spi_bus_initialize(host, &s->spi.bus_cfg, SPI_DMA_CH_AUTO);
    ESP_RETURN_ON_ERROR(err, TAG, "failed to intialize spi bus");
    ESP_LOGI(TAG, "intialized spi bus");

    err = esp_lcd_new_panel_io_spi(host, &s->esp_lcd.spi_cfg, &s->esp_lcd.io_handle);
    ESP_RETURN_ON_ERROR(err, TAG, "failed to add new lcd device to spi");
    ESP_LOGI(TAG, "added lcd device to the spi bus");

    err = esp_lcd_new_panel_st7789(
        s->esp_lcd.io_handle,
        &s->esp_lcd.dev_cfg,
        &s->esp_lcd.panel_handle
    );
    ESP_RETURN_ON_ERROR(err, TAG, "failed to create new st7789 panel");
    ESP_LOGI(TAG, "initialized st7789");

    err = esp_lcd_panel_reset(s->esp_lcd.panel_handle);
    ESP_RETURN_ON_ERROR(err, TAG, "failed to reset lcd panel");
    ESP_LOGI(TAG, "lcd reset");

    err = esp_lcd_panel_init(s->esp_lcd.panel_handle);
    ESP_RETURN_ON_ERROR(err, TAG, "failed to intialize lcd panel");
    ESP_LOGI(TAG, "lcd init");

    err = esp_lcd_panel_invert_color(s->esp_lcd.panel_handle, true);
    ESP_RETURN_ON_ERROR(err, TAG, "failed to invert color on lcd panel");
    ESP_LOGI(TAG, "lcd invert_color");

    err = esp_lcd_panel_disp_on_off(s->esp_lcd.panel_handle, true);
    ESP_RETURN_ON_ERROR(err, TAG, "failed to turn on lcd panel");
    ESP_LOGI(TAG, "lcd display on");

    s->lvgl.disp_cfg = (lvgl_port_display_cfg_t) {
        .io_handle = s->esp_lcd.io_handle,
        .panel_handle = s->esp_lcd.panel_handle,
        .buffer_size = ((hres * vres)/10)*sizeof(lv_color_t),
        .double_buffer = true,
        .hres = hres,
        .vres = vres,
        .monochrome = false,
        .color_format = LV_COLOR_FORMAT_RGB565,
        .rotation = {
            .swap_xy = false,
            .mirror_x = false,
            .mirror_y = false,
        },
        .flags = {
            .buff_spiram = true,
            .buff_dma = true,
            .swap_bytes = true,
        },
    };
    s->lvgl.disp = lvgl_port_add_disp(&s->lvgl.disp_cfg);
    assert(s->lvgl.disp != NULL);
    return ESP_OK;
}