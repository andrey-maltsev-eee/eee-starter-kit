# Lesson 03: Digital Inputs & Push Buttons

Goal: Understand how digital inputs (push buttons in my case) work and how to read their states using Arduino.

### Components Required:
1 x Elegoo Uno R3  

1 x 830 Tie-points Breadboard  

1 x 5mm Red LED  

1 x 220Ω Resistor  

2 x Push Switches  

7 x M-M Jumper Wires  


### Key Takeaways:
Power/voltage isn't magically supplied to all pins at once. We explicitly tell the Uno which pins to read or control using `digitalRead()` and `digitalWrite()`.
We don't use the button to physically cut power to the LED line (like a light switch). Instead, the button acts as an event trigger for the microchip; the microchip decides what to do based on our code.

### Challenges & Fixes:
I was a bit confused why pressing a button turned on the LED when they weren't physically connected in the same circuit loop. Realized the Uno pins act like "messengers" communicating through code, rather than direct wiring. Mind = blown
