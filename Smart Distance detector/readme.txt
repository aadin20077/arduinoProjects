# Author : Aadin Zeeshan
# Date : 06/11/2024
# Copyright Allocation : Free To Use For Anyone.

## Smart Distance Monitoring System with Arduino
This project introduces a Smart Distance Monitoring System leveraging Arduino technology. The endeavor encompasses the development of a robust system for precise distance measurement and feedback. 
An Ultrasonic Distance Sensor is integrated with meticulous attention to detail, utilizing the NewPing library to enhance accuracy and reliability in measurements. A responsive LED control mechanism, 
triggered by proximity detection, enhances user interaction and visibility. Additionally, a user-friendly interface is implemented on an LCD screen using the LiquidCrystal library, providing clear and concise status updates.

## Components Required
- Arduino Board (e.g., Arduino Uno)
- Ultrasonic Distance Sensor
- LEDs (e.g., Red, Green, Yellow)
- I2C LCD Display (16X2)
- Resistors (if required)
- Jumper Wires

## Setup
1. Connect the Ultrasonic Distance Sensor to the Arduino board according to the datasheet or pinout diagrams.
2. Connect LEDs (Red, Green, Yellow) to digital pins on the Arduino board.
3. Connect the LCD display to the Arduino board, ensuring proper wiring for data and power.
4. Upload the Arduino code provided in the repository to your Arduino board using the Arduino IDE.

## Operation
1. Upon powering the system, the Ultrasonic Distance Sensor begins measuring distances.
2. LEDs provide feedback based on the proximity detected:
3. Red LED indicates objects are too close.
4. The LCD display continuously updates with distance measurements and corresponding status.
5. Users can adjust the system parameters as needed based on environmental conditions and desired thresholds.

## Code Explanation
The Arduino code utilizes the NewPing library to interface with the Ultrasonic Distance Sensor, providing precise distance measurements. Conditional statements are employed to control LED behavior based on proximity detection results. The LiquidCrystal library facilitates the display of distance measurements and status updates on the LCD screen.

## Repository Structure
- `README.md`: This file containing information about the project.
- `Code_1.ino`: The Arduino code for the soil moisture detection system with temperature control.
- `Schematic_diagram.png`: A schematic diagram illustrating the wiring connections for the project.

## References
- Arduino Official Website: https://www.arduino.cc/
- NewPing Library: https://bitbucket.org/teckel12/arduino-new-ping
- LiquidCrystal Library: https://www.arduino.cc/en/Reference/LiquidCrystal
- Datasheets for sensors and components used in the project.