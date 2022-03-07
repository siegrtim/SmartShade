/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include "Position.h"
#include "platform/mbed_thread.h"


// Blinking rate in milliseconds
#define BLINKING_RATE_MS                                                    500


int main()
{
    // Initialise the digital pin LED1 as an output
    DigitalOut led(LED1);
    Position home(0,0,0);
    Position Roboter(10,10,50);

    //Test commit

    while (true) {
        Roboter.setPosition(20,10,30);
        led = !led;
        thread_sleep_for(BLINKING_RATE_MS);
        printf("%2.3f %2.3f %2.3f\r\n",Roboter.getXCoordinate(),Roboter.getYCoordinate(),Roboter.getAngle());
    }
}
