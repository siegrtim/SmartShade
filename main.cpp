/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include "Position.h"
#include "platform/mbed_thread.h"


// Blinking rate in milliseconds
#define BLINKING_RATE_MS                                   500


int main()
{
    // Initialise the In and Outputs

    // I/O Motoren
    DigitalOut motorEnable(PF_2);
    PwmOut pwmLeft(PF_8);
    PwmOut pwmRight(PF_9);
    // Encoder 

    // I/O Magnetic Node
    I2C i2c(PB_7, PB_8);
    DigitalOut startMeas(PD_2);
    DigitalIn startRead(PD_1);

    // I/O Regensensor
    AnalogIN regen(PA_1);

    // I/O LEDs
    DigitalOut led(LED1);
    Position home(0,0,0);
    Position Roboter(10,10,50);

    //Test commit

    while (true) {
        Roboter.setnewPosition(20,10,30);
        led = !led;
        thread_sleep_for(BLINKING_RATE_MS);
        printf("%2.3f %2.3f %2.3f\r\n",Roboter.getXCoordinate(),Roboter.getYCoordinate(),Roboter.getAngle());
    }
}

