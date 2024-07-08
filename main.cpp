#include "mbed.h"


DigitalOut led1(PA_5);
DigitalOut led2(PB_14);

//Threads
Thread th1;
Thread th2;

// Toggle LED1 every 2 seconds
void toggle_led1() {
    while (true) {
        led1 = !led1;
        printf("LED1 toggled\r\n");
        ThisThread::sleep_for(2s); 
    }
}

// Toggle LED2 every 5 seconds
void toggle_led2() {
    while (true) {
        led2 = !led2;
        printf("LED2 toggled\r\n");
        ThisThread::sleep_for(5s); 
    }
}

int main() {
    // Start Threads
    th1.start(toggle_led1);
    th2.start(toggle_led2);

    
   
}


