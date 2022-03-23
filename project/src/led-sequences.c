#include <msp430.h>
#include "led-sequences.h"
#include "led.h"

int blinkLimit = 0;   //  state var representing the number of current maximum blinks
int direction = 0;
int color = 0; // state var representing the color that is blinking

void blinkUpdate()
{
  static int blinkCount = 0; // state var representing blink state
  blinkCount ++;
  if (blinkCount >= blinkLimit) {
    blinkCount = 0;
    if (color == 0) {
      greenControl(1);
    } else {
      redControl(1);
    }
  } else {
    ledsOff();
  }
}

void secondUpdate()  // called every 1/250 sec 
{
  static int secondCount = 0; // state var representing elapsed time
  secondCount ++;
  if (secondCount >= 250) { // update blink limit once per second
    secondCount = 0;
    oncePerSecond();
  }
}

void buttonOne() // called every 1/250 sec
{
  blinkUpdate();
  secondUpdate();
}

static int on = 0; // state var representing whether an led is on or off

void buttonTwo() // toggle the led once per second
{
  static int secondCount = 0; // state var representing elapsed time
  secondCount ++;
  if (secondCount >= 250) { // update blink limit once per second
    ledsOff();
    secondCount = 0;
     on ^= 1;  // toggle the led
    if (color == 0)
      greenControl(on);
    else
      redControl(on);
  }
}
