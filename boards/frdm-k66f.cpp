/*
 * board_config.cpp
 *
 *  Created on: Feb 25, 2020
 *      Author: nelis & glenn
 */
#ifdef TARGET_K66F

#include "frdm_config.h"

PwmOut frontLedRed(FRONT_LED_RED);
PwmOut frontLedGreen(FRONT_LED_GREEN);
PwmOut frontLedBlue(FRONT_LED_BLUE);

PwmOut frontLedSwitch(FRONT_LED_SWITCH);

/*
 * board_setup() - ...
 */
void board_specific_setup(void)
{
    frontLedRed = 0.0; //PwmOut
    frontLedRed.period(0.001);
    frontLedGreen = 0.0; //PwmOut
    frontLedGreen.period(0.001);
    frontLedBlue = 0.0; //DigitalOut
    frontLedBlue.period(0.001);

    // TODO on K66F make PWM
    frontLedSwitch = 0.0; //PwmOut
    frontLedSwitch.period(0.001);
}

#endif