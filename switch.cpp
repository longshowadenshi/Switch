#include <Switch.h>

Button::Button(int pin1)
{
  pinMode(pin1,INPUT);
  _pin1=pin1;
}
Led::Led(int pin2)
{
  pinMode(pin2,OUTPUT);
  _pin2=pin2;
}
void Button::state()
{
  val=digitalRead(_pin1);
  if((val==HIGH)&&(oldval==LOW))
  {
    statee=1-statee;
    delay(50);
  }  
  oldval=val;
}
int Button::onoff()
{
  if(statee==1)
    {
      return 1;
    }
  else
    {
      return 0;
    }
}

void Led::lighton()
{
  digitalWrite(_pin2,HIGH);
}
void Led::lightoff()
{
  digitalWrite(_pin2,LOW);
}
