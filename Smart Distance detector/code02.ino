#include <LiquidCrystal_I2C.h>
#include <NewPing.h>

int led_pin = 13;
int trig_pin = 12;
int echo_pin = 11;
int max_distance = 500;
float curr_distance;

// Initialize ultrasonic sensor
NewPing sonar(trig_pin, echo_pin, max_distance);

// Initialize LCD
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // Set up LCD
  lcd.init();
  lcd.backlight();
  
  // Set up LED pin as output
  pinMode(led_pin, OUTPUT);
}

void loop() {
  // Measure distance using ultrasonic sensor
  curr_distance = sonar.ping_cm();
  
  // Display distance on LCD
  lcd.setCursor(0, 0);
  lcd.print("Distance : ");
  
  // Turn on LED if distance is less than or equal to 90cm
  if (curr_distance <= 90) {
    digitalWrite(led_pin, HIGH);
  } else {
    digitalWrite(led_pin, LOW);
  }
  
  // Display current distance on LCD
  lcd.setCursor(0, 1);
  lcd.print(curr_distance);
  lcd.print(" cm");
  
  // Delay before next measurement
  delay(800);
  
  // Clear LCD for next measurement
  lcd.clear();
}