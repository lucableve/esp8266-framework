#ifndef _OTA_CONFIG_H_
#define _OTA_CONFIG_H_

#include <Arduino.h>

#define OTA_HOST_BUF_SIZE 50
#define OTA_VERSION_KEY "latest"
#define OTA_VERSION_LENGTH 15
#define OTA_VERSION_API_RESP_LENGTH OTA_HOST_BUF_SIZE
#define OTA_API_CHECK_DURATION 15000

struct ota_configs {
  char ota_host[OTA_HOST_BUF_SIZE];
  int ota_port;
};

const ota_configs PROGMEM _ota_config_defaults = {
  {0}, 80
};

const int ota_config_size = sizeof(ota_configs) + 5;

using ota_config_table = ota_configs;

#endif