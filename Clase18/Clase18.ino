#define sensor 14
void setup(){
  Serial.begin(115200);
  pinMode(sensor, INPUT);
}

void loop(){
  bool value = digitalRead(sensor);
  if(value == 0){
    Serial.println("Blanco");
    delay(500);
  }else{
    Serial.println("Negro");
    delay(500);
  }
}