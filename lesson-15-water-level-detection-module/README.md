# Lesson 15: Water Level Detection Sensor Module

Goal: to learn about the water level detection sensor

### Components Required:
(1) x Elegoo Uno R3
(3) x F-M wires (Female to Male DuPont wires)
(1) x Water lever detection sensor module

### Key Takeaways:
The sensor converts water depth into an electrical voltage signal using an amplifying circuit with a transistor and comb-like copper PCB tracks.

Tap water contains dissolved minerals that act as a variable resistor bridging the gap between adjacent copper traces on the sensor.

Submerging the sensor deeper creates more parallel conductive paths through the water, allowing more electricity to flow through.

The Elegoo Uno R3 uses its built-in Analog-to-Digital Converter (ADC) to convert the sensor's analog voltage (0V to 5V) into a digital reading between 0 and 1023.

Surface tension and residual water droplets trapped between the copper traces can cause the sensor to continue reading a non-zero value even after being pulled out of the water.

The sensor's raw output is non-linear and may max out at a value lower than 1023 (such as 360) due to water resistance.

### Little experiment:
After using a fresh water from the tap, I wanted to look if physics really works (yep) and put 3 teaspoons of salt in the cup. The readings were higher! Up to 420! Yaaaaay
