#ifndef DEFINES_H
#define DEFINES_H

#define MAIN_MENUS_MAX_NUMBER    4   /* Max number of menus at home page*/

#define MAX_NUMBER_OF_KEYS  12
#define MAX_LHS_KEYS        4
#define MAX_RHS_KEYS        4
#define MAX_BOTTOM_KEYS     4

#define LHS_KEYS_OFFSET     (0)
#define RHS_KEYS_OFFSET     (MAX_LHS_KEYS)
#define BOTTOM_KEYS_OFFSET  (MAX_LHS_KEYS + MAX_RHS_KEYS)

#define HOME_PAGE_INDEX     0
#define EXPLORE_PAGE_INDEX  1
#define DEVICES_PAGE_INDEX  2
#define SETTINGS_PAGE_INDEX 3

#define DEVICE_NAME_MAX_LEN 32U
#define DEVICE_DATA_BUFFER_MAX_LEN  128U

#define NODE_ADVERTISE_LISTEN_PORT  6969

#define MAX_DEVICES_SUPPORTED   64

//
//  data buffer indices
//
#define DEVICE_FUNC_CODE    0
#define DEVICE_TYPE         1
#define DEVICE_FW_VERSION   2
#define DEVICE_RADIO_MODE   3
#define DEVICE_ID_INDEX     4


typedef unsigned char uint8_t;
//typedef char int8_t;

typedef unsigned short  uint16_t;
typedef short int16_t;

typedef unsigned int DeviceID;
typedef uint8_t DeviceType;

#endif // DEFINES_H
