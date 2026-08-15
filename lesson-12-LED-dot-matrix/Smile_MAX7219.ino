#include "LedControl.h"

LedControl lc = LedControl(12, 10, 11, 1);

byte smiley[8] = {
  B00000000, 
  B10011010, 
  B10100110, 
  B10100110, 
  B10100110, 
  B11011011, 
  B00000000, 
  B00000000  
};

void setup() {
  lc.shutdown(0, false);  
  lc.setIntensity(0, 4);   
  lc.clearDisplay(0);   
}

void loop() {
  for (int row = 0; row < 8; row++) {
    lc.setRow(0, row, smiley[row]);
  }
}