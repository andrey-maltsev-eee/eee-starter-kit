# Lesson 13: GY-521 Module

Goal: to learn how to use one of the best IMU (Inertia Measurement Unit) sensors, compatible with Arduino.

### Components Required:
(1) x Elegoo Uno R3
(1) x GY-521 module
(4) x F-M wires

### Key Takeaways:
IMU – Inertia Measurement Unit

MEMS – Micro Electro Mechanical Systems (vibrating beams, springs, masses) etched directly onto silicon chips alongside electronic circuitry.

Accelerometer measures linear acceleration (f. e gravity). Best for static tilt/orientation, but noisy during sudden movements.

Gyroscope measures angular velocity. Excellent for fast movement tracking, but subject to continuous "drift" over time. This drift is caused by the chip constantly adding the previous value to the current one, and if there is an additional output due to noise or temperature, then calculated angle will be bigger than it should be, even if it’s completely stationary.

Both gyroscope and accelerometer are often combined to make projects like self-balancing robot or flight controllers and to fix drift error (Kalman Filter, I will learn it in future university years)

Piezoelectric Effect – is mechanical stress or displacement inside the chip that changes electrical properties (generating micro-currents), converting physical motion into digital readings.

`//` in coding stop next lines from complying

--- 
Robot projects – you better be ready)

