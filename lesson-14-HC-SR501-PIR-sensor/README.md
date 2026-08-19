# Lesson 14: HC-SR501 PIR Sensor

Goal: to detect motion by measuring infrared heat using PIR sensor.

### Components Required:
(1) x Elegoo Uno R3
(1) x HC-SR501 PIR motion sensor
(3) x F-M wires (Female to Male DuPont wires)

### Key Takeaways:
The HC-SR501 PIR sensor detects motion by measuring differential changes in passive infrared radiation (heat) emitted by bodies moving across its two internal sensing zones.

The sensor operates on 5 to 20 VDC input power, outputs a digital HIGH signal at 3.3V when motion is detected, and outputs a LOW signal when no motion is detected.

It features a 110-degree conical detection field with an adjustable range of approximately 3 to 7 meters.

Turning the sensitivity potentiometer clockwise decreases the range toward 3 meters, while turning it counter-clockwise increases the range toward 7 meters.

The time delay potentiometer adjusts how long the output remains HIGH after motion is detected, ranging from about 3 seconds (fully counter-clockwise) to 5 minutes (fully clockwise).

The sensor requires an initial warm-up period of roughly one minute after receiving power, during which it may emit false detection signals.

Immediately after the set time delay completes, the sensor enforces a hard 3-second lockout period where its output stays LOW and all motion detection is blocked.

Setting the jumper to Single Trigger mode starts the time delay on the first detected motion and blocks further detection during that window, whereas Repeatable Trigger mode resets the time delay with every newly detected motion.

The Arduino's built-in LED labeled L is hardwired directly to digital pin 13, allowing code to light it up by setting pin 13 to HIGH without any extra external wiring.

### Little experiment:
Although the 'infrared heat' that the sensor measures sounds similar to the infrared signal used in a TV remote control, a PIR sensor cannot detect this signal. Infrared light has a wavelength measured in nanometers, whereas infrared heat has a wavelength in micrometers.
