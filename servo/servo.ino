#include <Servo.h>
#define pot A0

Servo s1;

int angS1;

void setup() {
  s1.attach(2);
  angS1 = 0;
  s1.write(angS1);
  pinMode(pot, INPUT);

}

void loop() {
  angS1 = map(analogRead(pot), 0 , 1023, 0, 180);
  
  s1.write(angS1);
  
 
}
