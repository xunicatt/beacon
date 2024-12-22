#include "ws2812b.h"
#include <esp_log.h>
#include <esp_check.h>
#include <string.h>

#define TAG "ws2812b"
#define LED_DMA_BUFFER_SIZE(x) ((((x) * 16 * (24/4)))+1)

esp_err_t ws2812b_init(
    ws2812b_t* w,
    gpio_num_t pin,
    size_t led_count,
    spi_host_device_t spi_host,
    spi_dma_chan_t dma_channel
) {
    assert(w != NULL);
    w->pin = pin;
    w->led_count = led_count;
    w->spi_config.host = spi_host;
    w->spi_config.dma_chanel = dma_channel;
    w->spi_config.bus_cfg = (spi_bus_config_t){
        .miso_io_num = GPIO_NUM_NC,
        .mosi_io_num = pin,
        .sclk_io_num = GPIO_NUM_NC,
        .quadhd_io_num = GPIO_NUM_NC,
        .quadwp_io_num = GPIO_NUM_NC,
        .max_transfer_sz = LED_DMA_BUFFER_SIZE(w->led_count),
    };
    w->spi_config.dev_cfg = (spi_device_interface_config_t) {
        .mode = 0,
        .clock_speed_hz = 3.2 * 1000 * 1000,
        .spics_io_num = GPIO_NUM_NC,
        .queue_size = 1,
        .command_bits = 0,
        .address_bits = 0,
    };

    esp_err_t err = ESP_OK;
    err = spi_bus_initialize(
        w->spi_config.host,
        &w->spi_config.bus_cfg,
        w->spi_config.dma_chanel
    );
    ESP_RETURN_ON_ERROR(err, TAG ".ws2812b_init", "failed to intialize spi");
    ESP_LOGI(TAG, "intialized spi bus");

    err = spi_bus_add_device(
        w->spi_config.host,
        &w->spi_config.dev_cfg,
        &w->spi_config.handle
    );
    ESP_RETURN_ON_ERROR(err, TAG ".ws2812b_init", "failed to add device to spi");
    ESP_LOGI(TAG, "added spi device");

    size_t dma_buffer_size = LED_DMA_BUFFER_SIZE(w->led_count);
    w->dma_buffer = (uint16_t*)heap_caps_malloc(dma_buffer_size, MALLOC_CAP_DMA);
    assert(w->dma_buffer != NULL);
    ESP_LOGI(TAG, "allocated %zu bytes for dma buffer", dma_buffer_size);

    w->table = (uint32_t*)heap_caps_malloc(sizeof(uint16_t) * w->led_count, MALLOC_CAP_DEFAULT);
    assert(w->dma_buffer != NULL);
    ESP_LOGI(TAG, "allocated %zu bytes for led color table", sizeof(uint16_t) * w->led_count);

    return ESP_OK;
}

void ws2812b_deinit(ws2812b_t* w) {
    assert(w != NULL);
    spi_bus_remove_device(w->spi_config.handle);
    ESP_LOGI(TAG, "removed spi device");
    spi_bus_free(w->spi_config.host);
    ESP_LOGI(TAG, "freed spi bus");
    heap_caps_free(w->dma_buffer);
    ESP_LOGI(TAG, "freed dma buffer");
    heap_caps_free(w->table);
    ESP_LOGI(TAG, "freed color table");
}

void ws2812b_set_color(ws2812b_t* w, uint32_t col) {
    for(size_t i = 0; i < w->led_count; i++)
        w->table[i] = col;
}

esp_err_t ws2812b_update(ws2812b_t* w) {
	uint16_t pattern[] = {
        0x8888,
        0x8C88,
        0xC888,
        0xCC88,
        0x888C,
        0x8C8C,
        0xC88C,
        0xCC8C,
        0x88C8,
        0x8CC8,
        0xC8C8,
        0xCCC8,
        0x88CC,
        0x8CCC,
        0xC8CC,
        0xCCCC,
	};
    esp_err_t err = ESP_OK;
    memset(w->dma_buffer, 0, LED_DMA_BUFFER_SIZE(w->led_count));

    for(size_t i = 0, n = 0; i < w->led_count; i++) {
        uint32_t temp = w->table[i];

        w->dma_buffer[n++] = pattern[0x0f & (temp >> 20)];
        w->dma_buffer[n++] = pattern[0x0f & (temp >> 16)];
        w->dma_buffer[n++] = pattern[0x0f & (temp >> 12)];
        w->dma_buffer[n++] = pattern[0x0f & (temp >> 8)];
        w->dma_buffer[n++] = pattern[0x0f & (temp >> 4)];
        w->dma_buffer[n++] = pattern[0x0f & (temp >> 0)];
    }

    spi_transaction_t t = {0};
    t.length = LED_DMA_BUFFER_SIZE(w->led_count) * 8;
    t.tx_buffer = w->dma_buffer;
    
    err = spi_device_transmit(w->spi_config.handle, &t);
    return err;
}