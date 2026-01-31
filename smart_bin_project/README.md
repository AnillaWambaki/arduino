# Smart Bin Project

Automatic trash bin using Arduino, an ultrasonic sensor, and a servo. The lid opens when an object is detected and closes after a set delay.

## Overview

This project detects an approaching object using an HC-SR04 ultrasonic sensor and operates a servo to open and close the bin lid. It is designed for simple, hands-free operation.

## Hardware

- Arduino Uno, Nano, or compatible board
- HC-SR04 ultrasonic distance sensor
- 5V servo motor (for example SG90)
- External 5V power supply for the servo (recommended)
- Breadboard and jumper wires

## Wiring

Ultrasonic sensor (HC-SR04):
- VCC  5V
- GND  GND
- TRIG  Arduino pin 9
- ECHO  Arduino pin 10

Servo:
- VCC  5V (external supply recommended)
- GND  common ground with the Arduino
- Signal  Arduino pin 6

Ensure the external servo supply and the Arduino share a ground.

## Installation

1. Wire the components according to the Wiring section.
2. Open smart_bin_project.ino in the Arduino IDE.
3. Select the board (Tools  Board) and port (Tools  Port).
4. Upload the sketch.

## Usage

Once powered and uploaded, the sketch continuously measures distance. When an object is detected within the configured threshold, the lid opens; it closes automatically after the configured delay.

## Configuration

Open the sketch and adjust these values as needed:
- TRIGGER_DISTANCE  detection threshold in centimeters
- OPEN_DELAY  how long the lid remains open (milliseconds)
- Pin definitions  change if you use different pins

## Troubleshooting

- Servo jitter or no movement: confirm the servo has a stable 5V supply and ground connected. Test the servo with a simple sweep sketch.
- Noisy sensor readings: check wiring and mounting; add a short delay between readings or filter values in software.
- Lid opens unexpectedly: reduce the detection distance or add simple debounce logic in the sketch.

## Files

- smart_bin_project.ino  main Arduino sketch

---
If any pin numbers in the sketch do not match your wiring, update them in the code before uploading.
