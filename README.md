# ⚛️ Arc Reactor Mark II - Open Source Prop Replica

## Project Overview
This project provides all necessary files (Electronics, 3D Models, and Firmware) to build a sophisticated, functional replica of the Mark II Arc Reactor with an emphasis on realistic plasma motion effects.

The design focuses on a premium, compact, and fully wireless solution for a dynamic display prop. The core feature is the smooth, chaotic rotation effect of the ice-blue plasma filaments, controlled by custom firmware.

## Key Features
* **Ice-Blue Plasma Effect:** Uses 5 custom LED filaments (300mm length) controlled via PWM for dynamic, realistic light effects (rotation, chaos, flickering).
* **Standalone Power:** Features an integrated Li-Po battery (150-200mAh) and a full power management system (TP4056 for charging, Mini Boost to 5V).
* **Amovibility & Latency:** Designed to be easily detached from its magnetic display stand, maintaining the light effect for a short duration thanks to the embedded power system.
* **Microcontroller:** ESP32-C3 Mini for high-speed PWM control (5 dedicated LEDC channels) and battery monitoring (ADC).
* **SMD Component Integration:** Custom circular PCB design utilizing SOT-23 MOSFETs for minimal footprint and optimal soldering simplicity.
* **Optics:** Use of UV Resin casting with a 3D-printed TPU mold for superior light diffusion and visual quality.

## Project Files Included
This repository is organized into the following directories:

| Directory | Content | Description |
| :--- | :--- | :--- |
| **`Firmware/`** | Arduino/PlatformIO Code | Source code (C/C++) for the ESP32-C3, including PWM routines, ADC battery monitoring, and the 'flicker/fade-out' logic. |
| **`Electronics/`** | KiCad Project Files | Schematics, PCB layout files (circular design), and custom component libraries (e.g., SOT-23 footprints, ESP32-C3 module). |
| **`Mechanical/`** | STL / FreeCAD Files | 3D models for the reactor casing, the flexible TPU casting mold, and the magnetic display stand components. |
| **`Documentation/`** | Datasheets & Guides | Bill of Materials (BOM), wiring diagrams, and assembly guides. |

## License
This project is released under the **GNU General Public License v3.0 (GPL-3.0)**. See the `LICENSE` file for more details.
