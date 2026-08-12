# Lesson 11: IR Receiver Module

Goal: To observe how an infrared receiver module detects, filters, and decodes modulated light signals

### Components Required:
(1) x Elegoo Uno R3  

(1) x IR receiver module  

(1) x IR remote  

(3) x F-M wires (Female to Male DuPont wires  

### Key Takeaways:
An IR remote control saves power by staying in a deep sleep mode until a button is pressed, at which point it transmits short bursts of 940 nm infrared light pulsed rapidly at a 38 kHz carrier frequency.  

The receiver module uses an optical filter to block visible light and an internal band-pass filter to ignore any light that is not flickering near 38 kHz (IR detector is digital out – either LOW/HIGH)

When a valid 38 kHz burst is detected, the receiver pulls its signal pin low, allowing the microcontroller to measure the pulse timing and decode the stream into a specific hexadecimal command.  

The three connection pins on the module are often labeled G, R, and Y, where green wire is used for ground, red for power, and yellow for signal/data sending.  

Data bits are distinguished not by changing frequency, but by varying the duration of the pauses between light bursts, where a short pause represents a binary zero and a longer pause represents a binary one.


### Little experiment: 
I tested the working angular range of the IR signal by pointing the remote slightly off-target, finding an effective direct reception area of about a 30-centimeter radius.  

After that, I discovered that pointing the remote directly away at one hundred eighty degrees failed to reach the sensor directly, but angling an inclined sheet of paper in front of the remote allowed the signal to reach the receiver because of surface reflection!  

This occurs because light experiences reflection on the front outer layer of paper fibers regardless (!) of thickness, whereas stopping light transmission through to the back side requires about one centimeter of paper thickness.
