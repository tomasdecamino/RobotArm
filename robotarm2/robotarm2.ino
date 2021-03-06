//@author: Tomas de Camino Beck
// www.funcostarica.org

#include <Servo.h>

Servo servo1, servo2;

void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);

  servo1.attach(6);
  servo2.attach(7);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val1 = analogRead(A0);
  int angulo1 = map(val1, 0, 1023, 180, 0);
  servo1.write(angulo1);

  int val2 = analogRead(A1);
  int angulo2 = map(val2, 0, 1023, 180, 0);
  servo2.write(angulo2);


}
