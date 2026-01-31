# Arduino

This repository contains small Arduino projects. Each project is stored in its own folder so you can open and
upload the sketches independently.

Projects

- `Hello_World` — simple LED blink sketch (blinks digital pin 13 on and off with one second delay).
- `smart_bin_project` — automatic bin lid control using a distance sensor and a servo (contains the Arduino sketch
  and wiring notes).

How to use

1. Open the project folder you want in the Arduino IDE.
2. Select the correct board (Tools → Board) and the correct port (Tools → Port).
3. Open the sketch file (`*.ino`).
4. Click Upload.

Notes

- Follow the wiring notes inside each project's README before connecting hardware.
- If a project uses a servo or other power-hungry component, use an external power supply and share ground with the
  Arduino.

Files and layout

- `Hello_World/` — blink example
- `smart_bin_project/` — smart bin sketch and documentation

License

You may use or modify the code in this repository.
