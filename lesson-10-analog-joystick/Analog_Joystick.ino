// www.elegoo.com
// 2016.12.09

// Arduino pin numbers
const int SW_pin = 2; // digital pin connected to switch output
const int X_pin = A0; // analog pin connected to X output
const int Y_pin = A1; // analog pin connected to Y output

void setup() {
  pinMode(SW_pin, INPUT_PULLUP); // Using modern pull-up initialization
  Serial.begin(9600);
}

void loop() {
  // Read raw Y-axis value and flip it so UP = 1023 and DOWN = 0
  int yValInverted = 1023 - analogRead(Y_pin);

  Serial.print("Switch:  ");
  Serial.print(digitalRead(SW_pin));
  Serial.print("\n");
  
  Serial.print("X-axis: ");
  Serial.print(analogRead(X_pin));
  Serial.print("\n");
  
  Serial.print("Y-axis: ");
  Serial.println(yValInverted); // Printing the corrected Y value!
  Serial.print("\n\n");
  
  delay(1000);
}