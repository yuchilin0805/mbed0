#include "mbed.h"

void LED(DigitalOut& ledpin){
    for(int i=0;i<2;++i){
        ledpin=!ledpin;
        wait(0.2f);
    }
}