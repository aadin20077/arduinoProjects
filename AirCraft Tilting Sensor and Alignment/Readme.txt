Author: Aadin Zeeshan
## Date: 06/17/2024
## Copyright Allocation: Free To Use For Anyone.

## Aircraft Navigation Sensor with Arduino
This project introduces an Aircraft Navigation Sensor leveraging Arduino technology. 
The endeavor encompasses the development of a robust system for precise altitude measurement and wing level detection. 
An Ultrasonic Distance Sensor is integrated with meticulous attention to detail, utilizing accurate measurements for effective navigation. 
A responsive dual LCD control mechanism, displaying altitude and wing level status, enhances user interaction and visibility.

## Components Required
1. Arduino Board (e.g., Arduino Uno)
2. Ultrasonic Distance Sensor
3. I2C LCD Displays (2x 16X2)
4. Wing Sensors (e.g., limit switches or similar sensors)
5. Resistors (if required)
6. Jumper Wires

## Setup
1. Connect the Ultrasonic Distance Sensor to the Arduino board according to the datasheet or pinout diagrams.
2. Connect two I2C LCD displays to the Arduino board, ensuring proper wiring for data and power.
3. Connect the wing sensors to the Arduino board.
4. Upload the Arduino code provided in the repository to your Arduino board using the Arduino IDE.

## Operation
1. Upon powering the system, the Ultrasonic Distance Sensor begins measuring the altitude.
2. One LCD display shows the current altitude measured by the sensor.
3. The second LCD display indicates the status of the wing sensors:
4. "Right" indicates the right wing is tilted.
5. "Left" indicates the left wing is tilted.
6. "OK" indicates both wings are level.
7. Users can adjust the system parameters as needed based on environmental conditions and desired thresholds.

## Code Explanation
The Arduino code initializes two I2C LCD displays for showing altitude and wing level status. 
The Ultrasonic Distance Sensor provides precise altitude measurements, while digital readings from wing sensors determine the level status of the wings. 
Conditional statements control the display output based on sensor readings.

## Repository Structure

1. README.md: This file containing information about the project.
2. Code_1.ino: The Arduino code for the aircraft navigation sensor.
3. Schematic_diagram.png: A schematic diagram illustrating the wiring connections for the project.

## References
Arduino Official Website: https://www.arduino.cc/
LiquidCrystal_I2C Library: https://www.arduino.cc/en/Reference/LiquidCrystalI2C
Datasheets for sensors and components used in the project.