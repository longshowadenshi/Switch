#include <Switch.h>
Button button(PC13);
Led led(LED_BUILTIN);

void setup() {
}

void loop() {
  button.state();
  button.onoff();
  if(button.onoff()==1)
  {
    led.lighton();
  }
  else
  {
    led.lightoff();
  }
}
