#pragma once

// #include <AP_Common/AP_Common.h>
// #include <AP_HAL/AP_HAL.h>
// #include <AP_Param/AP_Param.h>
// #include <GCS_MAVLink/GCS_MAVLink.h>
// #include <AP_SerialManager/AP_SerialManager.h>

// #include "AP_Wingsensors_Backend.h"
#define SENSORS_PER_WING 4

struct wingsensors_t
{
    uint16_t left[SENSORS_PER_WING];
    uint16_t right[SENSORS_PER_WING];
};

// class AP_Wingsensors_Backend;

// class AP_Wingsensors
// {
//     public:
//         friend class AP_Wingsensors_Backend;

//         AP_Wingsensors(AP_SerialManager &_serial_manager);

//         enum Wingsensors_Status{
//             Wingsensors_NotConnected = 0,
//             Wingsensors_NoData,
//             Wingsensors_Good
//         };

//         struct Wingsensors_State{
//             uint16_t    pressureLeft[SENSORS_PER_WING];
//             uint16_t    pressureRight[SENSORS_PER_WING];
//             Wingsensors_Status status;
//         }

//         // Return the number of wingsensor instances
//         uint8_t num_sensors(void);
        
//         // detect and initialise any available wingsensors
//         void init(void);

//         // update state of all wingsensors. Should be called at around
//         // 10Hz from main loop
//         void update(void);

//         // Handle an incoming message
//         void handle_msg(mavlink_message_t *msg);

//         uint16_t left[4];
//         uint16_t right[4];
//     private:
//         Wingsensors_State state;
//         AP_Wingsensors_Backend *driver;
        
// };