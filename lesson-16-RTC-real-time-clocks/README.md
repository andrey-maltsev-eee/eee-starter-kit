# Lesson 16: Real-Time Clock Module

Goal: we are about to learn how to use clocks!

### Components Required:
(1) x Elegoo Uno R3  

(1) x DS1307 RTC module  

(4) x F-M wires (Female to Male DuPont wires)  


### Key Takeaways:
The DS1307 is a low-power real-time clock (RTC) chip that tracks time and date data, communicating with an Arduino Uno via the I2C protocol.

The L1 LED on the RTC module acts purely as a power indicator, turning on only when external primary power (**VCC**) is supplied.

Component labels on circuit boards follow standard reference designators: **L** stands for LED/Light, **BT** for Battery, **C** for Capacitor, **U** for Integrated Circuit, **R** for Resistor, and **Y** for Crystal Oscillator.

A backup coin cell battery (such as a CR1220 or CR2032) powers the internal RTC chip to preserve timekeeping when main power is disconnected, but it does not light up the L1 LED or send data.

Coin cell batteries in this module can last 3 to 10 years because the clock chip draws under 500 nanoamps of current in backup mode.

The quartz crystal oscillator (**Y1**) acts as the module's time base, using the inverse piezoelectric effect (where electric voltage causes the quartz to physically flex) to vibrate at precisely 32.768 kHz.

The TX LED staying lit when closing the Arduino IDE is caused by idle voltage states from internal pull-up resistors on the USB interface chip, carrying no active data to the clock module.
