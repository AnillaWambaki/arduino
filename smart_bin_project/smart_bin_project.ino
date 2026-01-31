#include <Servo.h>

Servo lidServo;

// Pin definitions
const int trigPin = 9;
const int echoPin = 10;
const int ledPin  = 3;

const int openAngle  = 90;   // Servo angle when bin is open
const int closeAngle = 0;    // Servo angle when bin is closed

long duration;
int distance;

void setup() {
  lidServo.attach(6);      // Servo signal pin
  lidServo.write(closeAngle);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);

  digitalWrite(ledPin, LOW);

  Serial.begin(9600);
}

void loop() {

  // --- Measure distance ---
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;   // Convert to cm

  // --- Check if an object is detected ---
  if (distance > 0 && distance < 6) {

    Serial.println("Bin Open");

    // Open lid
    lidServo.write(openAngle);
    digitalWrite(ledPin, HIGH);

    // Keep bin open for 2 seconds (adjust if needed)
    delay(2000);

    // Close lid
    lidServo.write(closeAngle);
    digitalWrite(ledPin, LOW);

    // Small delay to avoid rapid re-triggering
    delay(50);
  }

  // Small delay between readings
  delay(10);
}
