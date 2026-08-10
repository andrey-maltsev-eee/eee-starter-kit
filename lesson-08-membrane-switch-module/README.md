# Lesson 08: Ultrasonic Sensor Module

Goal: To learn how to use matrix keyboard and understand why it is efficient

### Components Required:
(1) x Elegoo Uno R3  

(1) x Membrane switch module	

(4) x M-M wires (Male to Male jumper wires)

### Key Takeaways:

A standard 4x4 matrix keypad allows us to control 16 independent push-buttons using only 8 digital I/O pins instead of 17 (16 signal pins + 1 ground).

The Arduino doesn't read all keys at once. It continuously scans the grid in a fraction of a millisecond by activating one row at a time and checking which column line receives the electric signal.

Physical layout and schematic representations can look different due to PCB trace routing (preventing crossing lines).

The code acts as a bridge: `hexaKeys` defines what the human sees, while `rowPins` and `colPins` tell the `<Keypad.h>` library which Arduino pins physically correspond to which Row and Column.

The library doesn't dictate fixed pins. Pins `9, 8, 7, 6` and `5, 4, 3, 2` were chosen purely for neat, sequential wiring into digital pins on the Arduino board.


### Issues and Fixes:

#### Issue 1: Counterintuitive Schematic Layout
In the circuit schematic diagram, the row and column layout looked inverted or rotated compared to the physical keypad face and the code logic. This is because schematic diagrams prioritize clean wire routing on paper (avoiding overlapping line intersections) rather than representing true physical geometry.

#### Fix 1: 
Separated the concept of Physical View (how components sit on the table and wire up) from Electrical View (how current flows). In code, we map `rowPins` and `colPins` based strictly on the physical pin order of the ribbon connector plugged into the Arduino.

#### Issue 2: Understanding the Wire Order 
Confusion about why `rowPins` was assigned `{9, 8, 7, 6}` and `colPins` `{5, 4, 3, 2}` instead of starting from pin 2 upwards. Pin 1 of the keypad ribbon connector is physically mapped to Column 4, whereas Pin 8 is mapped to Row 1.

#### Fix 2: matched the physical connection order:
* Keypad Pin 8 (Row 1) $\rightarrow$ Arduino Pin 9
* Keypad Pin 7 (Row 2) $\rightarrow$ Arduino Pin 8
* Keypad Pin 6 (Row 3) $\rightarrow$ Arduino Pin 7
* Keypad Pin 5 (Row 4) $\rightarrow$ Arduino Pin 6
* Keypad Pin 4 (Col 1) $\rightarrow$ Arduino Pin 5
* Keypad Pin 3 (Col 2) $\rightarrow$ Arduino Pin 4
* Keypad Pin 2 (Col 3) $\rightarrow$ Arduino Pin 3
* Keypad Pin 1 (Col 4) $\rightarrow$ Arduino Pin 2


---
So far it was the most challenging part for me, as it is the first experience of looking inside the detail and trying to understand every aspect. I was REALLY exhausted afterwards. I hope I won't forget it, yep
