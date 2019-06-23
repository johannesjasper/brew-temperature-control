/*
   Inpired by
   http://www.ardumotive.com/8-digit-7seg-display-en.html
*/

#include "LedControl.h"

LedControl lc = LedControl(12, 13, 10, 1);

void setup() {
  /*
    The MAX72XX is in power-saving mode on startup,
    we have to do a wakeup call
  */
  lc.shutdown(0, false);
  /* Set the brightness to a medium values */
  lc.setIntensity(0, 8);
  /* and clear the display */
  lc.clearDisplay(0);


  // first 4 digits, display target temperature
  lc.setDigit(0, 7, 1, false);
  lc.setDigit(0, 6, 0, false);
  lc.setDigit(0, 5, 0, false);
  lc.setLed(0, 5, 0, true); // dot
  lc.setDigit(0, 4, 0, false);

  // last 4 digits, display currenttemperature
  lc.setDigit(0, 3, 0, false);
  lc.setDigit(0, 2, 2, false);
  lc.setDigit(0, 1, 4, false);
  lc.setLed(0, 1, 0, true); // dot
  lc.setDigit(0, 0, 8, false);
}

void loop() {
  // TBD
}