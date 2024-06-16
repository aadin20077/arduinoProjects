#include <LiquidCrystal_I2C.h>

// Initialize LCD displays for altitude and rate of climb
LiquidCrystal_I2C lcd_alt(0x26,16,2); // LCD at address 0x26, 16 columns, 2 rows
LiquidCrystal_I2C lcd_roc(0x27,16,2); // LCD at address 0x27, 16 columns, 2 rows

// Define pins for ultrasonic sensor and wing sensors
#define trig_pin 12 // Trigger pin for the ultrasonic sensor
#define echo_pin 11 // Echo pin for the ultrasonic sensor
#define left_wing_sensor 7 // Pin for the left wing sensor
#define right_wing_sensor 6 // Pin for the right wing sensor
#define max_distance 500 // Maximum distance for ultrasonic sensor in cm
#define curr_alt 0; // Current altitude (unused in this code, can be removed)

int left_wing; // Variable to store the state of the left wing sensor
int right_wing; // Variable to store the state of the right wing sensor

int duration; // Duration of the echo pulse
int distance; // Calculated distance based on the echo duration

void setup(){
  // Initialize the LCD displays
  lcd_alt.init();
  lcd_roc.init();
  
  // Turn on the backlight for both LCDs
  lcd_alt.backlight();
  lcd_roc.backlight();
  
  // Set pin modes for the ultrasonic sensor and wing sensors
  pinMode(trig_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
  pinMode(left_wing_sensor, INPUT_PULLUP);
  pinMode(right_wing_sensor, INPUT_PULLUP);
}

void loop(){
  // Clear the LCD displays
  lcd_alt.clear();
  lcd_roc.clear();
  
  // Read the states of the wing sensors
  left_wing = digitalRead(left_wing_sensor);
  right_wing = digitalRead(right_wing_sensor);
  
  // Trigger the ultrasonic sensor
  digitalWrite(trig_pin, LOW);
  delayMicroseconds(2);
  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin, LOW);

  // Read the duration of the echo pulse
  duration = pulseIn(echo_pin, HIGH);
  // Calculate the distance based on the duration of the echo pulse
  distance = ((duration * 0.0343) / 2);
  distance *= 100; // Convert distance to cm
  
  // Display the altitude on the LCD
  lcd_alt.setCursor(0, 0);
  lcd_alt.print("Altitude : ");
  
  lcd_alt.setCursor(0, 1);
  lcd_alt.print(distance);
  
  // Display the wing level status on the LCD
  lcd_roc.setCursor(0, 0);
  lcd_roc.print("Level wing : ");
  
  lcd_roc.setCursor(0, 1);
  
  // Determine and display which wing is tilted
  if (right_wing == 0){
    lcd_roc.print("Right");
  }
  else if (left_wing == 0){
    lcd_roc.print("Left");
  }
  else{
    lcd_roc.print("OK");
  }
  
  // Small delay to stabilize the readings
  delay(50);
}