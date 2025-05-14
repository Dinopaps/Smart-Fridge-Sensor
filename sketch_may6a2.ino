#include <NewPing.h>  // The Library used
 
// Ultrasonic Sensor Setup 
#define TRIG_PIN 7
#define ECHO_PIN 8
#define MAX_DISTANCE 100  // Max range to check in cm
NewPing sonar(TRIG_PIN, ECHO_PIN, MAX_DISTANCE);
 
//  Pin Definitions 
const int redPin = 3;
const int greenPin = 4;
const int bluePin = 5;
const int buzzerPin = 6;
 
// Threshold and Timing 
const int doorThreshold = 10;              // Door open if distance > 10 cm
const unsigned long delayTime = 10000;     // 10 seconds in milliseconds
 
//  State Tracking 
bool doorOpen = false;
unsigned long doorOpenTime = 0;
 
void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
 
  setLEDColor(0, 255, 0);  // Start with green (closed)
  digitalWrite(buzzerPin, LOW);
}
 
void loop() {
  int distance = sonar.ping_cm();
  Serial.println(distance); // Optional: monitor in Serial
 
  if (distance > 0 && distance > doorThreshold) {
    // Door is open
    if (!doorOpen) {
      doorOpen = true;
      doorOpenTime = millis();  // Starts the timer
    }
 
    unsigned long elapsed = millis() - doorOpenTime;
 
    if (elapsed < delayTime) {
      setLEDColor(255, 255, 0);  // Yellow (warning)
      digitalWrite(buzzerPin, LOW);
    } else {
      setLEDColor(255, 0, 0);    // Red (alert)
      digitalWrite(buzzerPin, HIGH);  // Active buzzer continuously
    }
  } else {
    // Door closed 
    doorOpen = false;
    setLEDColor(0, 255, 0);  // Green
    digitalWrite(buzzerPin, LOW);
  }
 
  delay(100);  // Small delay 
}
 
//  RGB LED control
void setLEDColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}