#include "mbed.h"

class Servo
{
  public:
    Servo(PinName pin, double period, double pulsewidth); 
    void init();
    void servoMove(double);

  private:
    PwmOut *servo;
    PinName pin;
    double period;
    double pulseWidth;
};