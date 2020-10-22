/*
 * board_config.h
 *
 *  Created on: Feb 25, 2020
 *      Author: nelis & glenn
 */
#ifdef TARGET_KL82Z

#ifndef SRC_BOARD_CONFIG_H_
#define SRC_BOARD_CONFIG_H_

#include <mbed.h>

// Front panel
#define FRONT_LED_RED       PTA14   // J1- 1
#define FRONT_LED_GREEN     PTA15   // J1- 3
#define FRONT_LED_BLUE      PTA16   // J1- 5

#define FRONT_LED_SWITCH    PTC8    // J1- 9

#define FRONT_SWITCH_0      PTA17   // J1- 7
#define FRONT_SWITCH_1      PTA1    // J1-11
#define FRONT_SWITCH_2      PTA2    // J1-13
#define FRONT_SWITCH_3      PTB11   // J1-15

// External interrupt pin
#define INTERRUPT_MCP       PTC9    // J1-16

// Digital I/O
#define DIGITAL_IN_0        PTB7    // J2- 7
#define DIGITAL_IN_1        PTB8    // J2- 9
#define DIGITAL_IN_2        PTE7    // J2-15
#define DIGITAL_IN_3        PTE8    // J2-17

#define DIGITAL_OUT_0       PTB4    // J2- 1 & J2-11 (for 66)
#define DIGITAL_OUT_1       PTB5    // J2- 3 & J2-13 (for 66)
#define DIGITAL_OUT_2       PTE11   // J2-19
#define DIGITAL_OUT_3       PTB6    // J2- 5 & J4- 9 (for 66)

// PWM and Analog out
#define PWM_OUT_0           PTC2    // J1-12
#define PWM_OUT_1           PTC3    // J1-14
#define PWM_OUT_2           PTD4    // J2- 2
#define PWM_OUT_3           PTD5    // J2- 4

#define PWM_OUT_BUZZER      PTC1    // J1- 8

// Analog in
#define ANALOG_IN_0         PTC0    // J4- 6
#define ANALOG_IN_1         PTD6    // J4- 8
#define ANALOG_IN_2         PTB1    // J4-10
#define ANALOG_IN_3         PTB0    // J4-12

#define V_DC_IN             PTD1    // J4- 4

// Comms
#define SERIAL_TX           PTB17   // J1- 4
#define SERIAL_RX           PTB16   // J1- 2
// USBTX/RX as normal
#define I2C_SCL             PTC10   // J2-20
#define I2C_SDA             PTC11   // J2-18

#define SPI_MOSI            PTC6    // J2- 8
#define SPI_MISO            PTC7    // J2-10
#define SPI_SCK             PTC5    // J2-12
#define SPI_CS              PTC4    // J2- 6

#define OLED_CS             PTD7    // J1- 6
#define OLED_CD             PTC12   // J1-10

/*
 * Pin definitions
 */
/// DigitalOut instead of PwmOut for the KL82Z board
extern DigitalOut frontLedRed;
extern DigitalOut frontLedGreen;
extern DigitalOut frontLedBlue;

// Same for the switch led
extern DigitalOut frontLedSwitch;

void board_specific_setup(void);
#endif /* SRC_BOARD_CONFIG_H_ */
#endif /* TARGET_KL82Z */