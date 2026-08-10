# Lesson 02: RGB LED

Goal: Understand how to generate a spectrum of different colors using a single RGB LED and primary color mixing.

### Components Required:
1 x Elegoo Uno R3  

1 x 830 Tie-Points Breadboard  

4 x M-M Jumper Wires  

1 x RGB LED (Common Cathode)  

3 x 220Ω Resistors

### Key Takeaways:
The longest lead is the Common Cathode (-), which connects to Ground (GND). The other three leads control the Red, Green, and Blue internal LEDs.

By adjusting the intensity of the three primary colors (Red, Green, Blue), we can create almost any color.

PWM rapidly switches the voltage ON and OFF at high frequency. By changing the ratio of "ON" time to "OFF" time (*duty cycle*), we simulate varying brightness levels.

### Challenges & Fixes:
Issue: Colors looked unbalanced or didn't mix into white correctly.
Fix: Used separate 220Ω resistors for each color pin to properly limit current according to each internal LED's voltage needs.
