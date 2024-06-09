#ifndef ENUMS_H
#define ENUMS_H

typedef enum ENUM_DISPLAY_KEYS
{
    KEY_1 = 1,
    KEY_2,
    KEY_3,
    KEY_4,
    KEY_5,
    KEY_6,
    KEY_7,
    KEY_8,
    KEY_9,
    KEY_10,
    KEY_11,
    KEY_12
}eDisplayKeys_t;

typedef enum ENUM_DEVICE_TYPE
{
    ESP_DEV_TYPE_TEMP_HUMIDITY,
    ESP_DEV_TYPE_SOIL_MOSITURE,
    ESP_DEV_TYPE_DEFAULT = 0xED
}eDeviceType_t;

typedef enum ENUM_DEVICE_RADIO_MODE
{
    DEV_WIFI_STA,
    DEV_WIFI_STA_AP,
    DEV_WIFI_AP,
    DEV_RADIO_NA = 0xFF
}eDevRadioMode_t;

typedef enum ENUM_DEV_FUNCTION_CODES
{
    DEV_FUN_SET_AP = 0x1F,
    DEV_FUNC_ADVERTISE = 0xFF
}eDevFunctionCode_t;



#endif // ENUMS_H
