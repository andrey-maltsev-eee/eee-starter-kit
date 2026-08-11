//www.elegoo.com
//2018.12.19
#include <Servo.h>
Servo myservo;

void setup(){
  myservo.attach(9);
  myservo.write(90);// move servos to center position -> 90°
} 
void loop(){
 
}
