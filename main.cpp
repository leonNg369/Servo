  
#include "mbed.h"
#include "Servo.h"

Servo servo(PB_3, 0.0025, 0);
//PWM output pin, Period(s), Plusewidth(s)

int main(){
    while(1){
        servo.servoMove(500);
        //Plusewidth(s)
        }
    }


