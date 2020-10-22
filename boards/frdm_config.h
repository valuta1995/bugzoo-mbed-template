#include <mbed.h>

/*
 * Config
 */
#define UART_BAUD_RATE  9600
#define USB_BAUD_RATE   115200


/*
 * Common pins
 */
#define BOARD_LED_RED       LED1
#define BOARD_LED_GREEN     LED2
#define BOARD_LED_BLUE      LED3

#define ANALOG_OUT          DAC0_OUT// J4-11 ? Has some issues in Mbed Studio

/*
 * Pins with same typing
 */
// Front Panel
extern DigitalOut boardLedRed;
extern DigitalOut boardLedGreen;
extern DigitalOut boardLedBlue;

extern InterruptIn frontSwitch0;
extern InterruptIn frontSwitch1;
extern InterruptIn frontSwitch2;
extern InterruptIn frontSwitch3;

extern InterruptIn interruptMcp;

// Digital I/O
extern DigitalOut digitalOut0;
extern DigitalOut digitalOut1;
extern DigitalOut digitalOut2;
extern DigitalOut digitalOut3;

extern InterruptIn digitalIn0;
extern InterruptIn digitalIn1;
extern InterruptIn digitalIn2;
extern InterruptIn digitalIn3;

// PWM and Analog out
extern PwmOut pwmOut0;
extern PwmOut pwmOut1;
extern PwmOut pwmOut2;
extern PwmOut pwmOut3;

extern PwmOut pwmOutBuzzer;

extern AnalogOut analogOut;

// Analog in
extern AnalogIn analogIn0;
extern AnalogIn analogIn1;
extern AnalogIn analogIn2;
extern AnalogIn analogIn3;

extern AnalogIn vDcIn;

// Comms
extern BufferedSerial uartSerial;
extern BufferedSerial usbSerial;

extern I2C i2c;
extern SPI spi;

extern DigitalOut oledCs;
extern DigitalOut oledCd;


/*
 * Functions
 */
void board_setup(void);
/*
 * Board specific configuration
 */
#include "frdm-k66f_config.h"
#include "frdm-kl82z_config.h"