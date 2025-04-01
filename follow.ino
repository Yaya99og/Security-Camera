#include <Servo.h>

Servo myServo;         
const int pirPin = 2;  
int motionDetected = 0;
int currentAngle = 0;  
bool increasing = true; 

void setup() {
  myServo.attach(9);        
  pinMode(pirPin, INPUT);   
}

void loop() {
  motionDetected = digitalRead(pirPin); 

  if (motionDetected == HIGH) {
    delay(3000);
  } else {
    if (increasing) {
      currentAngle++;
      if (currentAngle >= 180) {
        currentAngle = 180; 
        increasing = false; 
      }
    } else {
      currentAngle--;
      if (currentAngle <= 0) {
        currentAngle = 0;  
        increasing = true;  
      }
    }
    
    myServo.write(currentAngle); 
    delay(15); 
  }
}
