# Lesson 19: LCD1602 Display Module

Goal: to understand how to wire and control a 16x2 LCD display to output text and numbers, and how to interface it with an Arduino using control pins and a dedicated code library.

### Components Required:
(1) x Elegoo Uno R3

(1) x LCD1602 module

(1) x Potentiometer (10k)

(1) x 830 tie-points Breadboard

(16) x M-M wires (Male to Male jumper wires)


### Key Takeaways:
The LCD1602 module can display two rows of text with up to 16 characters on each row, utilizing an LED backlight (powered by the A and K pins) to make the text visible.

A 10k potentiometer acts as an adjustable voltage divider connected to the VO pin to establish the screen's contrast; without tuning this knob, the screen may appear entirely blank or completely filled with solid blue blocks.

The communication relies on control pins: the RS (Register Select) pin tells the screen whether it is receiving a system instruction (like moving the cursor) or character data (like the letter "H"), while the E (Enable) pin pulses to tell the screen to read the data.

The R/W (Read/Write) pin is connected directly to ground (VSS) to lock the screen into "write-only" mode, which is standard for most display projects.

The display can operate in "4-bit mode," meaning it only requires four data pins (D4, D5, D6, D7) connected to the Arduino instead of all eight, which saves digital pins for other sensors.

The display's grid (I suppose almost all detail use it) uses zero-based indexing, meaning the command lcd.setCursor(0, 1) moves the starting position of the text to the very first column (0) of the second row (1).


### Little Experiment:
The surface of the screen was so soft I wanted to hold this beautiful detail endlessly, but I occasionally found out something. If I press the screen just a bit by my finger, the text appears to be no longer white but purplish. This is because the LCD consists of two very thin layers of glass, and a trapped special fluid made of liquid crystals between them. The screen works by shining the LED backlight through this fluid, so when Arduino sends electrical signals, it causes the liquid crystals to twist and untwist, acting like a microscopic shutter, either blocking the light or letting it pass through to form the white letters we see. When I push on the front of the screen, it causes the crystals to be pushed out of place, and they bend the backlight at incorrect angles.

---

Did a bit of a cable management for the first time yaaaaaay. Looks beautiful when the wires do not cross, don’t you think? :)
