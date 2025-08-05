#include <Servo.h>

// Servo objects
Servo tailServo;
Servo leftFinServo;
Servo rightFinServo;

// Servo pin assignments (adjust to your wiring)
const int TAIL_PIN = 13;      // Tail servo pin
const int LEFT_FIN_PIN = 14;  // Left pectoral fin servo
const int RIGHT_FIN_PIN = 12; // Right pectoral fin servo

// Tail oscillation settings
int tailAngle = 90;           // Neutral position
int tailOffset = 30;          // Swing range from center
int tailSpeed = 100;          // Delay between swings (ms)

void setup() {
  // Attach servos to pins
  tailServo.attach(TAIL_PIN);
  leftFinServo.attach(LEFT_FIN_PIN);
  rightFinServo.attach(RIGHT_FIN_PIN);

  // Set all to neutral position
  tailServo.write(90);
  leftFinServo.write(90);
  rightFinServo.write(90);

  delay(1000); // Let servos stabilize
}

void loop() {
  // 1. Swim forward
  swimForward();

  // 2. Turn left (uncomment to test steering)
  // turnLeft();

  // 3. Turn right (uncomment to test steering)
  // turnRight();
}

void swimForward() {
  // Tail oscillates between two extremes for propulsion
  tailServo.write(tailAngle + tailOffset);
  delay(tailSpeed);
  tailServo.write(tailAngle - tailOffset);
  delay(tailSpeed);
  
  // Keep pectoral fins neutral for straight movement
  leftFinServo.write(90);
  rightFinServo.write(90);
}

void turnLeft() {
  // Slightly adjust fins to cause a left turn
  leftFinServo.write(70);  // Flap left fin inward
  rightFinServo.write(90); // Neutral
  delay(500);
}

void turnRight() {
  // Slightly adjust fins to cause a right turn
  leftFinServo.write(90);  // Neutral
  rightFinServo.write(110); // Flap right fin inward
  delay(500);
}
