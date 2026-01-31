# Hello World — LED Blink

This is the classic Arduino "Hello World": a simple sketch that blinks an LED.

What the sketch does

- Sets digital pin 13 as an output in `setup()`.
- In `loop()` it turns pin 13 HIGH, waits 1000 ms, turns it LOW, then waits 1000 ms — repeating forever.

Why this is useful

Blinking an LED verifies the board is running code and the upload process works.

Requirements

- An Arduino-compatible board (Uno, Nano, etc.)
- USB cable to connect the board to your computer
- Arduino IDE installed

Wiring

- If your board has a built-in LED on pin 13 (most Arduinos do), no extra wiring is needed.
- To use an external LED: connect the LED's long leg (anode) to pin 13 through a 220Ω resistor, and the short leg
  (cathode) to GND.

How to run

1. Open `Hello_World.ino` in the Arduino IDE.
2. Select the correct board (Tools → Board) and the correct port (Tools → Port).
3. Click Upload.
4. After upload completes, the LED on pin 13 will blink on and off every second.

Customizing

- To change the blink speed, edit the `delay(1000);` values to a different number of milliseconds.
- To blink a different pin, change the pin number in `pinMode()` and the `digitalWrite()` calls.

Troubleshooting

- No blinking after upload: confirm the correct board and port are selected and the upload completed successfully.
- If using an external LED, verify the resistor and orientation, and that GND is common with the board.
- If uploads fail, try a different USB cable or port, or check required drivers for your board.

Files

- `Hello_World.ino` — sketch that blinks pin 13

That's all — this README describes the project and the exact steps to run it.
