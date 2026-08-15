#include "LedControl.h"

// DIN -> Pin 12, CLK -> Pin 10, CS/LOAD -> Pin 11, 1 Display
LedControl lc = LedControl(12, 10, 11, 1);

// Array containing the 8 rows for the smiley face
byte smiley[8] = {
  B00111100, // Row 0
  B01000010, // Row 1
  B10100101, // Row 2 (Eyes)
  B10000001, // Row 3
  B10100101, // Row 4 (Smile corners)
  B10011001, // Row 5 (Smile curve)
  B01000010, // Row 6
  B00111100  // Row 7
};

void setup() {
  lc.shutdown(0, false);  // Wake up MAX7219
  lc.setIntensity(0, 4);   // Set brightness (0-15)
  lc.clearDisplay(0);     // Clear screen
}

void loop() {
  // Draw each row of the smiley face
  for (int row = 0; row < 8; row++) {
    lc.setRow(0, row, smiley[row]);
  }
}