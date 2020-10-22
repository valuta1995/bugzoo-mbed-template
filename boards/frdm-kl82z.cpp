/*
 * board_config.cpp
 *
 *  Created on: Feb 25, 2020
 *      Author: nelis & glenn
 */
#ifdef TARGET_KL82F

#include "frdm_config.h"

DigitalOut frontLedRed(FRONT_LED_RED);
DigitalOut frontLedGreen(FRONT_LED_GREEN);
DigitalOut frontLedBlue(FRONT_LED_BLUE);

DigitalOut frontLedSwitch(FRONT_LED_SWITCH);

/*
 * board_setup() - ...
 */
void board_specific_setup(void)
{
    frontLedRed = 0; //DigitalOut
    frontLedGreen = 0; //DigitalOut
    frontLedBlue = 0; //DigitalOut

    frontLedSwitch = 0; //DigitalOut
}

#endif