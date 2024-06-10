#include <LiquidCrystal_I2C.h>
#include <Wire.h>

/**************************************
Soil Moisture detection system using
Integrated temperature sensor to check
whether the soil is healthy enough
for planting crops.

Author : Aadin Zeeshan
Date : 06/02/2024
**************************************/

// Define pin numbers
int led_high = 13;
int led_ok = 12;
int led_perfect = 11;
int sensor_in = A0;
int temp_in = A1;
int sensor_value;
float temp;

// Initialize LCDs
LiquidCrystal_I2C lcd(0x21,16,2);
LiquidCrystal_I2C lcd2(0x22,16,2);

// Function to turn LED to green
void turn_green(){
  digitalWrite(led_ok,LOW);
  digitalWrite(led_high,LOW);
  digitalWrite(led_perfect,HIGH);
}

// Function to turn LED to yellow
void turn_yellow(){
  digitalWrite(led_ok,HIGH);
  digitalWrite(led_high,LOW);
  digitalWrite(led_perfect,LOW);
}

// Function to turn LED to red
void turn_red(){
  digitalWrite(led_ok,LOW);
  digitalWrite(led_high,HIGH);
  digitalWrite(led_perfect,LOW);
}

void setup()
{
  // Set LED pins as OUTPUT
  pinMode(led_high,OUTPUT);
  pinMode(led_ok,OUTPUT);
  pinMode(led_perfect,OUTPUT);
  
  // Initialize LCDs
  lcd.init();
  lcd.backlight();
  
  lcd2.init();
  lcd2.backlight();
}

void loop()
{
  // Print temperature label on LCD
  lcd.setCursor(0,0);
  lcd.print("Temperature : ");
  
  // Print soil moisture label on LCD
  lcd2.setCursor(0,0);
  lcd2.print("Soil Moisture : ");
  
  // Read sensor values
  sensor_value = analogRead(sensor_in);
  temp = (((analogRead(temp_in)*5.0)/1024.0) -0.5) * 100;
  
  // Check soil moisture levels and temperature to determine LED color
  if(sensor_value >= 0 && sensor_value <=300){
    turn_red();
  }
  
  if(sensor_value>300 && sensor_value <370){
    turn_yellow();
  }
  if(sensor_value>=370 && sensor_value <=600){
    if(temp>=20 && temp<=30){
      turn_green();
    }
    else{
      turn_yellow();
   }
  }
  if(sensor_value>600 && sensor_value <=670){
    turn_yellow();
  }
  if(sensor_value > 670){
    turn_red();
  }
  
  // Print temperature and soil moisture values on LCDs
  lcd.setCursor(0,1);
  lcd.print(temp);
  lcd2.setCursor(0,1);
  lcd2.print(sensor_value);
  
  // Delay for 2 seconds before clearing LCDs
  delay(2000);
  lcd.clear();
  lcd2.clear();
}
