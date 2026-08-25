# Lesson 18: RC522 RFID Reader Module

Goal: to understand how the RC522 RFID module communicates to detect, authenticate, and read/write data on contactless 13.56 MHz RFID/MIFARE tags.

### Components Required:
(1) x Elegoo Uno R3

(1) x RC522 RFID module

(7) x F-M wires (Female to Male DuPont wires)

(1) x RFID Card / Key Fob (MIFARE tag)


### Key Takeaways:

In RFID terminology, the RC522 reader is designated as the PCD (Proximity Coupling Device), while the card or tag is called the PICC (Proximity Integrated Circuit Card).

The module primarily interfaces with the microcontroller using the high-speed, synchronous Serial Peripheral Interface (SPI) bus alongside dedicated control lines: SCK (pin 13), MISO (pin 12), MOSI (pin 11), SS/SDA (pin 10 / Chip Select), and RST (pin 9 / Reset).

The internal transmitter and receiver handle radio modulation, demodulation, decoding, and built-in error checking (Parity & CRC) to ensure transmitted data packets are received intact without wireless corruption.

Every RFID tag possesses a factory-assigned Unique Identifier (UID) used to detect and distinguish individual cards within the RF field.
