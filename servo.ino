#include <Servo.h>

Servo servo;

void setup()
{
  //servo.attach(5); //D1
  servo.attach(15); //D8
  servo.write(0);
  delay(1000);
  
}
void loop()
{
  servo.write(180);
  delay(1000);
  servo.write(0);
  delay(1000);
  
}
