#include "mbed.h"
#include "frdm_config.h"

#define SLEEPY_ON 1ms
#define SLEEPY_OFF 99ms

// main() runs in its own thread in the OS
int main()
{
    board_setup();

    // PwmOut pwmOutBuzzer(PTB2);


    while (true) {
        boardLedRed = 0;
        ThisThread::sleep_for(SLEEPY_ON);
        boardLedRed = 1;
        ThisThread::sleep_for(SLEEPY_OFF);
        boardLedGreen = 0;
        ThisThread::sleep_for(SLEEPY_ON);
        boardLedGreen = 1;
        ThisThread::sleep_for(SLEEPY_OFF);
        boardLedBlue = 0;
        ThisThread::sleep_for(SLEEPY_ON);
        boardLedBlue = 1;
        ThisThread::sleep_for(SLEEPY_OFF);

        
        boardLedRed = 0;
        boardLedGreen = 0;
        ThisThread::sleep_for(SLEEPY_ON);
        boardLedRed = 1;
        boardLedGreen = 1;
        ThisThread::sleep_for(SLEEPY_OFF);

        boardLedGreen = 0;
        boardLedBlue = 0;
        ThisThread::sleep_for(SLEEPY_ON);
        boardLedGreen = 1;
        boardLedBlue = 1;
        ThisThread::sleep_for(SLEEPY_OFF);
        
        boardLedBlue = 0;
        boardLedRed = 0;
        ThisThread::sleep_for(SLEEPY_ON);
        boardLedBlue = 1;
        boardLedRed = 1;
        ThisThread::sleep_for(SLEEPY_OFF);
    }
}

