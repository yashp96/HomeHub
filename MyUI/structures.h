#ifndef STRUCTURES_H
#define STRUCTURES_H

#include "defines.h"

typedef struct STRUCT_DEVICE_DATA
{
    uint16_t device_index;
    DeviceID device_id;
    DeviceType device_type;
    uint8_t fw_ver;
    uint8_t device_radio_mode;
    uint8_t device_name[DEVICE_NAME_MAX_LEN];
    uint8_t device_data_buffer[DEVICE_DATA_BUFFER_MAX_LEN];
    uint8_t is_device_active;
    void*   popupButtonPtr;
}sDeviceData_t;

#endif // STRUCTURES_H
