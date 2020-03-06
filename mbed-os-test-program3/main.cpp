#include "mbed.h"

DigitalOut redLed(LED_RED);
DigitalOut greenLed(LED_GREEN);

void LED(DigitalOut& ledpin);

int main(){
    redLed=1;
    greenLed=1;
    while(true){
        for(int i=0;i<3;i++)
            LED(redLed);
        for(int i=0;i<2;i++)
            LED(greenLed);
    }
}