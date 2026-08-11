# Lesson 10: Analog Joystick Module

Goal: To learn how to use the analog joystick module

### Components Required:
(1) x Elegoo Uno R3  

(1) x Joystick module  

(5) x F-M wires (Female to Male DuPont wires)  

### Key Takeaways:
Joystick contains two potentiometers (X and Y axes) for direction and one pushbutton switch (Key/SW) under the stick. The potentiometers act as variable resistors, dividing voltage between 0 V and 5 V based on physical position.  

Learned the difference between analog and digital devices: analog ones output a continuous, varying voltage between 0 V and 5 V. Analog pins should be connected to Arduino pins A0–A5. ‘Digital’ is similar to binary or On/Off, i.e. either full voltage (5 V / HIGH / 1) or no voltage (0 V / LOW / 0). Should be connected to Digital pins 0–13.


### Challenges & Fixes:
Issue 1: physical potentiometer orientation on the joystick puts 0 V at the top position.
Fix 1: I just inverted it mathematically in code by `int yVal = 1023 - analogRead(Y_pin);` :)  

Issue 2: I didn’t get at the first glance why at the start of the code we refer to pin ‘0’ and Arduino somehow classify it as A0 pin. Noticed then the function `Serial.print(analogRead(X_pin));`.
Fix 2: I decided to exclude this ambiguity by using explicit labels for the variables: `const int X_pin = A0;` . 

---
I haven't noticed that before, but for some details the required wires were of a different type (Female-Male)... It doesn't change much in terms of how details perform, but I kinda suffered connecting almost twice the number of M-M wires
