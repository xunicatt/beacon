#ifndef __WIFI_H
#define __WIFI_H 

#include <esp_err.h>
#include <esp_mac.h>
#include <esp_wifi.h>

#define SCAN_LIST_SIZE 8
#define CHANNEL_LIST_SIZE 0
#if CHANNEL_LIST_SIZE
#define CHANNEL_LIST {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11}
#endif

typedef struct {
    esp_netif_t* sta_netif;
    wifi_init_config_t cfg;
    wifi_ap_record_t ap_infos[SCAN_LIST_SIZE];
    uint16_t ap_count;
} wifi_t;

esp_err_t wifi_init(wifi_t* w);
esp_err_t wifi_scan(wifi_t* w);
esp_err_t wifi_connect(wifi_t* w, wifi_ap_record_t* ap, const char* passwd);
esp_err_t wifi_disconnect(wifi_t* w);

#endif