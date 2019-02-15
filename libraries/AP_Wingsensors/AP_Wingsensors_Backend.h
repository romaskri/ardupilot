// /*
//   backend driver class for airspeed
//  */

// #pragma once


// #include <AP_Common/AP_Common.h>
// #include <AP_HAL/AP_HAL.h>
// #include "AP_Wingsensors.h"

// // class AP_Wingsensors;

// class AP_Wingsensors_Backend
// {
// public:
//     // Constructor
//     AP_Wingsensors_Backend(AP_Wingsensors &frontend);
    
//     // Virtual constructor so that wingsensor drivers can 
//     // override with a custom destructor if needed
//     virtual ~AP_Wingsensors_Backend();

//     virtual bool init(void) = 0;

//     // return the current differential_pressure in Pascal
//     virtual bool get_differential_pressure(float &pressure) = 0;

//     // return the current temperature in degrees C, if available
//     virtual bool get_temperature(float &temperature) = 0;
// protected:
//     int8_t get_port(void) const;
//     float get_psi_range(void) const;

//     AP_Wingsensors &wingsenors;
//     AP_Wingsensors::Wingsensors_State &state;
    
//     // semaphore for access to shared frontend data
//     AP_HAL::Semaphore *sem;    
    
// private:
//     AP_Wingsensors &frontend;
// };
