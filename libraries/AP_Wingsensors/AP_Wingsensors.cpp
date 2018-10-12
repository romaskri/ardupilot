#pragma once

#include <AP_Common/AP_Common.h>
#include <AP_HAL/AP_HAL.h>
#include <AP_Param/AP_Param.h>
#include <GCS_MAVLink/GCS_MAVLink.h>

#define NUM_SENSORS 4

class AP_Wingsensors
{
public:

    // constructor
    AP_Wingsensors();

    void init(void);

    // read the values from DAQ and update _pressure array
    void read(void);

    // calibrate the sensors. This must be called on startup if the
    // altitude/climb_rate/acceleration interfaces are ever used
    void calibrate(bool in_startup);
    
    // get temperature if available
    bool get_temperature(float &temperature);

    // log data to MAVLink
	void log_mavlink_send(mavlink_channel_t chan, const Vector3f &vground);

    // return time in ms of last update
    uint32_t last_update_ms(void) const { return _last_update_ms; }

private:
    float			_pressure[NUM_SENSORS];
    float			_last_pressure[NUM_SENSORS];
    bool		    _healthy:1;
    bool		    _hil_set:1;
    float           _hil_pressure;
    uint32_t        _last_update_ms;
};