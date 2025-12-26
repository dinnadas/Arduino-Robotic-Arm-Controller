#include <Servo.h>

Servo baseServo;
Servo shoulderServo;
Servo elbowServo;
Servo gripperServo;
Servo rotator;


void setup() {
  baseServo.attach(3);
  shoulderServo.attach(5);
  elbowServo.attach(10);
  gripperServo.attach(9);
  baseServo.write(160); // Adjust this degree with your arm's initial point
  shoulderServo.write(180); // Adjust this degree with your arm's initial point
  elbowServo.write(50); // Adjust this degree with your arm's initial point
}


void moveBase(int targetAngle, int speedDelay = 15) {
  int currentAngle = baseServo.read();
  if (targetAngle > currentAngle) {
    for (int pos = currentAngle; pos <= targetAngle; pos++) {
      baseServo.write(pos);
      delay(speedDelay);
    }
  } else {
    for (int pos = currentAngle; pos >= targetAngle; pos--) {
      baseServo.write(pos);
      delay(speedDelay);
    }
  }
}

void moveShoulder(int targetAngle, int speedDelay = 15) {
  int currentAngle = shoulderServo.read();
  if (targetAngle > currentAngle) {
    for (int pos = currentAngle; pos <= targetAngle; pos++) {
      shoulderServo.write(pos);
      delay(speedDelay);
    }
  } else {
    for (int pos = currentAngle; pos >= targetAngle; pos--) {
      shoulderServo.write(pos);
      delay(speedDelay);
    }
  }
}

void moveElbow(int targetAngle, int speedDelay = 15) {
  int currentAngle = elbowServo.read();
  if (targetAngle > currentAngle) {
    for (int pos = currentAngle; pos <= targetAngle; pos++) {
      elbowServo.write(pos);
      delay(speedDelay);
    }
  } else {
    for (int pos = currentAngle; pos >= targetAngle; pos--) {
      elbowServo.write(pos);
      delay(speedDelay);
    }
  }
}

void moveGripper(int targetAngle, int speedDelay = 15) {
  int currentAngle = gripperServo.read();
  if (targetAngle > currentAngle) {
    for (int pos = currentAngle; pos <= targetAngle; pos++) {
      gripperServo.write(pos);
      delay(speedDelay);
    }
  } else {
    for (int pos = currentAngle; pos >= targetAngle; pos--) {
      gripperServo.write(pos);
      delay(speedDelay);
    }
  }
}
void loop() {
  //uncomment the below codes to move your arm smoothly
  //baseServo.write(160);
  //shoulderServo.write(180);
  //elbowServo.write(50);
  //gripperServo.write(50);
  //baseServo.write(50);
  //shoulderServo.write(40);
  //elbowServo.write(120);
  //gripperServo.write(0);
}