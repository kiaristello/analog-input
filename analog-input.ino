#include <Servo.h>
Servo myservo;

int pinServo = 7;
int pinPotenciometro = A4;
int val = 0;

void setup() {
  // 
  Serial.begin(9600);

  // Configurando Servo
  myservo.attach(pinServo);
}

void loop() {
  // 
  val = analogRead(pinPotenciometro);  // read the input pin
  Serial.println(val);          // debug value
  int angulo = map(val, 0, 904, 0, 180);
  myservo.write(angulo);
  delay(5);

}
