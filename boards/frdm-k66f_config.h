/*
 * board_config.h
 *
 *  Created on: Feb 25, 2020
 *      Author: nelis & glenn
 */
#ifdef TARGET_K66F

#ifndef SRC_BOARD_CONFIG_H_
#define SRC_BOARD_CONFIG_H_

#include <mbed.h>

// Front panel
#define FRONT_LED_RED       PTE12   // J1- 1
#define FRONT_LED_GREEN     PTE11   // J1- 3
#define FRONT_LED_BLUE      PTC1    // J1- 5

#define FRONT_LED_SWITCH    PTE9    // J1- 9

#define FRONT_SWITCH_0      PTC6    // J1- 7
#define FRONT_SWITCH_1      PTC7    // J1-11
#define FRONT_SWITCH_2      PTE8    // J1-13
#define FRONT_SWITCH_3      PTE7    // J1-15

// External interrupt pin
#define INTERRUPT_MCP       PTA25   // J1-16

// Digital I/O
#define DIGITAL_IN_0        PTB10   // J2- 7
#define DIGITAL_IN_1        PTB11   // J2- 9
#define DIGITAL_IN_2        PTE25   // J2-15
#define DIGITAL_IN_3        PTD13   // J2-17

#define DIGITAL_OUT_0       PTC0    // J2-11 & J2- 1 (for 82)
#define DIGITAL_OUT_1       PTE24   // J2-13 & J2- 3 (for 82)
#define DIGITAL_OUT_2       PTD12   // J2-19
#define DIGITAL_OUT_3       PTB23   // J4- 9 & J2- 5 (for 82)

// PWM and Analog out
#define PWM_OUT_0           PTC5    // J1-12
#define PWM_OUT_1           PTC2    // J1-14
#define PWM_OUT_2           PTB18   // J2- 2
#define PWM_OUT_3           PTB19   // J2- 4

#define PWM_OUT_BUZZER      PTC8    // J1- 8

// Analog in
#define ANALOG_IN_0         PTB5    // J4- 6
#define ANALOG_IN_1         PTB4    // J4- 8
#define ANALOG_IN_2         PTB3    // J4-10
#define ANALOG_IN_3         PTB2    // J4-12

#define V_DC_IN             PTB6    // J4- 4

// Comms
#define SERIAL_TX           PTC4    // J1- 4
#define SERIAL_RX           PTC3    // J1- 2
// USBTX/RX as normal
#define I2C_SCL             PTC10   // J2-20
#define I2C_SDA             PTC11   // J2-18

#define SPI_MOSI            PTD2    // J2- 8
#define SPI_MISO            PTD3    // J2-10
#define SPI_SCK             PTD1    // J2-12
#define SPI_CS              PTD0    // J2- 6

#define OLED_CS             PTC16   // J1- 6
#define OLED_CD             PTC12   // J1-10

/*
 * Pin definitions
 */
/// PwmOut instead of DigitalOut for the K66F board
extern PwmOut frontLedRed;
extern PwmOut frontLedGreen;
extern PwmOut frontLedBlue;

// Same for the switch led
extern PwmOut frontLedSwitch;

void board_specific_setup(void);
#endif /* SRC_BOARD_CONFIG_H_ */
#endif /* TARGET_K66F */