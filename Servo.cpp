#include "mbed.h"
#include "Servo.h"

Servo::Servo(PinName pin, double period, double pulseWidth)
{
  servo = new PwmOut(pin);
  this->period = period;
  this->pulseWidth = pulseWidth;
  init();
}

void Servo::servoMove(double width)
{
  servo->pulsewidth(width);
}

void Servo::init()
{
  servo->period(period);
}