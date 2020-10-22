#include "frdm_config.h"

/*
 * Pin construction
 */
DigitalOut boardLedRed(BOARD_LED_RED);
DigitalOut boardLedGreen(BOARD_LED_GREEN);
DigitalOut boardLedBlue(BOARD_LED_BLUE);

InterruptIn frontSwitch0(FRONT_SWITCH_0);
InterruptIn frontSwitch1(FRONT_SWITCH_1);
InterruptIn frontSwitch2(FRONT_SWITCH_2);
InterruptIn frontSwitch3(FRONT_SWITCH_3);

InterruptIn interruptMcp(INTERRUPT_MCP);

// Digital I/O
DigitalOut digitalOut0(DIGITAL_OUT_0);
DigitalOut digitalOut1(DIGITAL_OUT_1);
DigitalOut digitalOut2(DIGITAL_OUT_2);
DigitalOut digitalOut3(DIGITAL_OUT_3);

InterruptIn digitalIn0(DIGITAL_IN_0);
InterruptIn digitalIn1(DIGITAL_IN_1);
InterruptIn digitalIn2(DIGITAL_IN_2);
InterruptIn digitalIn3(DIGITAL_IN_3);

// PWM and Analog out
PwmOut pwmOut0(PWM_OUT_0);
PwmOut pwmOut1(PWM_OUT_1);
PwmOut pwmOut2(PWM_OUT_2);
PwmOut pwmOut3(PWM_OUT_3);

PwmOut pwmOutBuzzer(PWM_OUT_BUZZER);

AnalogOut analogOut(ANALOG_OUT);

// Analog in
AnalogIn analogIn0(ANALOG_IN_0);
AnalogIn analogIn1(ANALOG_IN_1);
AnalogIn analogIn2(ANALOG_IN_2);
AnalogIn analogIn3(ANALOG_IN_3);

AnalogIn vDcIn(V_DC_IN);

// Comms
BufferedSerial uartSerial(SERIAL_TX, SERIAL_RX, UART_BAUD_RATE);
BufferedSerial usbSerial(USBTX, USBRX, USB_BAUD_RATE);

I2C i2c(I2C_SDA, I2C_SCL);
SPI spi(SPI_MOSI, SPI_MISO, SPI_SCK, OLED_CS, use_gpio_ssel);

DigitalOut oledCs(OLED_CS);
DigitalOut oledCd(OLED_CD);


/*
 * board_setup() - ...
 */
void board_setup(void)
{
    boardLedRed = 1; //DigitalOut
    boardLedGreen = 1; //DigitalOut
    boardLedBlue = 1; //DigitalOut

    frontSwitch0.mode(PullUp); //InterruptIn 
    frontSwitch1.mode(PullUp); //InterruptIn
    frontSwitch2.mode(PullUp); //InterruptIn
    frontSwitch3.mode(PullUp); //InterruptIn

    interruptMcp.mode(PullUp); //InterruptIn

    // Digital I/O
    digitalOut0 = 0; //DigitalOut
    digitalOut1 = 0; //DigitalOut
    digitalOut2 = 0; //DigitalOut
    digitalOut3 = 0; //DigitalOut

    digitalIn0.mode(PullUp); //InterruptIn
    digitalIn1.mode(PullUp); //InterruptIn
    digitalIn2.mode(PullUp); //InterruptIn
    digitalIn3.mode(PullUp); //InterruptIn

    // PWM and Analog out
    pwmOut0 = 0.0; //PwmOut
    pwmOut0.period(0.020);
    pwmOut1 = 0.0; //PwmOut
    pwmOut1.period(0.020);
    pwmOut2 = 0.0; //PwmOut
    pwmOut2.period(0.020);
    pwmOut3 = 0.0; //PwmOut
    pwmOut3.period(0.020);

    pwmOutBuzzer = 0; //PwmOut

    analogOut = 0.0; //AnalogOut

    // Analog in
    // analogIn0; //AnalogIn
    // analogIn1; //AnalogIn
    // analogIn2; //AnalogIn
    // analogIn3; //AnalogIn

    // vDcIn; //AnalogIn

    // Comms
    // uartSerial; //Serial
    // usbSerial; //Serial

    i2c.frequency(100000); //I2C
    // spi; //SPI

    oledCs = 0; //DigitalOut
    oledCd = 0; //DigitalOut

    board_specific_setup();
}