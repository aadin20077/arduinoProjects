# Author : Aadin Zeeshan
# Date : 06/03/2024
# Copyright Allocation : Free To Use For Anyone.

# Soil Moisture Detection System with Temperature Control

This project utilizes an Arduino microcontroller to build a soil moisture detection system with temperature control. It employs the LiquidCrystal library to display moisture levels and temperature readings on an LCD screen. Additionally, it includes a temperature control feature where a green LED will illuminate only if the temperature falls within the range of 20 to 30 degrees Celsius.

## Components Required
- Arduino Board (e.g., Arduino Uno)
- Soil Moisture Sensor
- Temperature Sensor (e.g., DHT11 or DHT22)
- LCD Display
- Green LED
- Yellow LED
- Red LED
- Resisters (if required, not mandatory)
- Jumper Wires

## Setup
1. Connect the soil moisture sensor and temperature sensor to the Arduino board according to the datasheets or pinout diagrams.
2. Connect the LCD display to the Arduino board, ensuring proper wiring for data and power.
3. Connect a green LED to a digital pin on the Arduino board.
4. Connect a yellow LED to a digital pin on the Arduino board.
5. Connect a red LED to a digital pin on the Arduino board.
6. Upload the Arduino code provided in the repository to your Arduino board using the Arduino IDE.

## Operation
1. Once the system is powered on, the soil moisture and temperature readings will be displayed on the LCD screen.
2. The green LED will only light up if the temperature reading falls within the specified range of 20 to 30 degrees Celsius and The soil moisture sensor reading should be at safe value.
3. The LCD display will continuously update the moisture and temperature readings in real-time.
4. Adjust the system as necessary based on the environmental conditions and desired thresholds.

## Code Explanation
The Arduino code utilizes the LiquidCrystal library to interface with the LCD display and display the moisture and temperature readings. It also reads data from the soil moisture sensor and temperature sensor connected to the Arduino board.

The temperature control feature is implemented using conditional statements to check if the temperature reading falls within the specified range. If the temperature is within the range, the green LED is turned on; otherwise, it remains off.

## Repository Structure
- `README.md`: This file containing information about the project.
- `Code_1.ino`: The Arduino code for the soil moisture detection system with temperature control.
- `Schematic_diagram.png`: A schematic diagram illustrating the wiring connections for the project.

## References
- Arduino Official Website: https://www.arduino.cc/
- LiquidCrystal Library: https://www.arduino.cc/en/Reference/LiquidCrystal
- Datasheets for sensors and components used in the project.

