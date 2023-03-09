const int led = 2;
const int sensor = 14;
bool estado = false;
void setup(){
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT_PULLUP);
}

void loop(){
  bool valor = digitalRead(sensor);
  if(valor == LOW){
    estado = !estado;
    digitalWrite(led, estado);
    delay(750);
}