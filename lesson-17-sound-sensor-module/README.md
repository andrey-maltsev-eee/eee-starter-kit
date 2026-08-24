# Lesson 17: Sound Sensor Module

Goal: to understand how the sound sensor module detects sound intensity and interfaces with an Arduino using both analog and digital signals.

### Components Required:
(1) x Elegoo Uno R3

(1) x Sound sensor module

(4) x F-M wires (Female to Male DuPont wires)


### Key Takeaways:
The sound sensor module utilizes an electret condenser microphone to detect acoustic vibrations and convert them into electrical voltage signals.

The module provides two primary outputs: AO (Analog Output), which delivers a real-time continuous voltage waveform (0-5V) corresponding to sound waves, and DO (Digital Output), which sends a binary HIGH/LOW trigger.

A multi-turn blue precision potentiometer acts as an adjustable voltage divider to establish the threshold sensitivity (without shifting the external screw position).

Rotating the potentiometer screw counter-clockwise lowers the threshold voltage gap, making the module sensitive to quieter sounds, whereas turning it clockwise requires louder acoustic peaks to trigger.

The LED2 on the sensor board turns on when incoming sound exceeds the set threshold and the DO pin switches to HIGH.

Adding static minimum and maximum bounds (e.g., `Min:0` and `Max:1023`) to the serial print output locks the Y-axis range in the Serial Plotter, preventing background noise from causing exaggerated auto-scaled spikes.
