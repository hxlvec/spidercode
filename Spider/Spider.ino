#include "PWMServo.h"

#define SERVO_HIP0 0
#define SERVO_HIP1 2
#define SERVO_HIP2 4
#define SERVO_HIP3 6

#define SERVO_KNEE0 1
#define SERVO_KNEE1 3
#define SERVO_KNEE2 5
#define SERVO_KNEE3 7

pwmServo hip0, hip1, hip2,hip3;
pwmServo knee0, knee1, knee2, knee3;

void setup() {
  Serial.begin(9600);
  hip0.attach(SERVO_HIP0);
  knee0.attach(SERVO_KNEE0);
  hip1.attach(SERVO_HIP1);
  knee1.attach(SERVO_KNEE1);
  hip2.attach(SERVO_HIP2);
  knee2.attach(SERVO_KNEE2);
  hip3.attach(SERVO_HIP3);
  knee3.attach(SERVO_KNEE3);
}

void loop() {
  // put your main code here, to run repeatedly:
  
}

//https://www.robotshop.com/community/robots/show/chopstick-junior-1-0
/////////////////////////////////////
void rightturn()
{
  // lift front right knee, move front right hip forward and rear right hip backward, lower front right knee
  knee0.write(150);
  idle();
  hip0.write(30);
  hip3.write(90);
  idle();
  knee0.write(170);
  // lift rear left knee, move rear left hip forward and front right hip backward, lower rear left knee 
  knee2.write(150); 
  idle();
  hip2.write(130);
  hip0.write(100);
  idle();
  knee2.write(170);
  // lift front left knee, move front left hip forward and rear left hip backward, lower front left knee
  knee1.write(40);
  idle();
  hip1.write(130);
  hip2.write(50);
  idle();
  knee1.write(20);
  // lift rear right knee, move rear right hip forward and front left hip backward, lower rear right knee  
  knee3.write(40); 
  idle();
  hip3.write(70);
  hip1.write(50);
  idle();
  knee3.write(20);
  idle();
}
