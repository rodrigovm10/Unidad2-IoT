#include <Stepper.h>
#define FULLSTEP 14
#define SENSOR_PIN 34
int angle = 0;
const int stepsPerRevolution = 2038M
Stepper myStepper = Stepper(stepsPerRevolution, 14, 17, 26, 25);

void setup(){
  Serial.begin(9600);
  pinMode(SENSOR_PIN_INPUT_PULLUP);
}

void loop(){
  Serial.println(SENSOR_PIN);
  if(digitalRead(SENSOR_PIN == HIGH){
    myStepper = setSpeed(10);
    myStepper.step(.stepsPerRevolution);
    delay(1000);
  }
}