# Lesson 07: Ultrasonic Sensor Module

Goal: To learn how to measure distance from the objects using HC-SR04
### Components Required:
(1) x Elegoo Uno R3  

(1) x Servo (SG90)

(4) x F-M wires (Female to Male DuPont wires)  

### Key Takeaways:
It works this way:
1. Trigger Signal - we send a tiny electrical signal (a high pulse lasting just 10 µs) to the sensor's Trig pin.
2. The sensor automatically fires off 8 small sound waves at 40 kHz (far too high pitched for human ears to hear).
3. The sensor sets its Echo pin HIGH and waits. When the sound waves bounce off an object and return to the receiver, the pin goes back to LOW.
