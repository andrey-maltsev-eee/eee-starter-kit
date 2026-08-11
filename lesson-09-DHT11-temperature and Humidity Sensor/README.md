# Lesson 09: DHT11 Temperature and Humidity Sensor

Goal: To understand how to interface a DHT11 temperature and humidity sensor with an Arduino

### Components Required:
(1) x Elegoo Uno R3  

(1) x DHT11 Temperature and Humidity module  

(3) x F-M wires (Female to Male DuPont wires)  

### Key Takeaways:
The DHT11 needs at least 2 seconds between reads to avoid hardware overheating or data corruption.  

Using a `millis()` timer over `delay()` keeps the microcontroller responsive to other tasks while waiting for the next reading interval, rather than freezing the whole system.  

Baud rate (9600, set by software; this rate as it’s extremely reliable and less prone to noise or data errors) is the data speed (approx. 960 characters/second). Both the sender (Arduino) and receiver (Serial Monitor) must match to prevent garbled text.  

Noticed a LED on UNO R3 blinking from time to time. The TX (Transmit) LED flashes every time the Arduino sends a packet of data out to the computer (in this case, every 3 seconds). There are many abbreviations: TX, RX, DX, FX, CX. Hopefully, will see them soon as well.

---
Today is a damp day, I set a home temperature and humidity sensor near my workplace to detect any differences in data compared to DHT11. After about 10 minutes, the readings matched perfectly! Didn’t expect it to be that precise for the detail that small.

