#include "mbed.h"


DigitalIn button1(PD_13);
DigitalIn button2(PB_15);
DigitalOut led1(PC_9);
DigitalOut led2(PB_14);

int main() {
    while (1) {
        if (button1) {
            led1 = 1;  
            led2 = 0;  
        }
        else if (button2) {
            led1 = 0;  
            led2 = 1;  
        }
        else {
            led1 = 0;  
            led2 = 0; 
            
            
            printf("\r\n"); 
        }
    }
}