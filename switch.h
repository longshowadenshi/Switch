#ifndef Switch_H
#define Switch_H
#include <Arduino.h>

class Button 
{
  public:
    Button(int pin1);
    void state();
    int onoff();
  private:
    int statee=0;
    int val=0;
    int oldval=0;  
    int _pin1;
};

class Led
{
  public:
    Led(int pin2);
    void lighton();
    void lightoff();
  private:
    int _pin2;
};

#endif
