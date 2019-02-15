
// /*
//   backend driver class for wingsensors
//  */

// #include <AP_Common/AP_Common.h>
// #include <AP_HAL/AP_HAL.h>
// #include "AP_Wingsensors.h"

// extern const AP_HAL::HAL &hal;

// AP_Wingsensors_Backend::AP_Wingsensors_Backend(AP_Wingsensors &_frontend) :
//     frontend(_frontend)
// {
//     sem = hal.util->new_semaphore();
// }

// AP_Wingsensors_Backend::~AP_Wingsensors_Backend(void)
// {
//     delete sem;
// }
 

// int8_t AP_Wingsensors_Backend::get_pin(void) const
// {
//     return frontend._pin;
// }

// float AP_Wingsensors_Backend::get_psi_range(void) const
// {
//     return frontend._psi_range;
// }

// uint8_t AP_Wingsensors_Backend::get_bus(void) const
// {
//     return frontend._bus;
// }
