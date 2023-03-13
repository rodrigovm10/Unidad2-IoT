#include <UTFT.h>

#define VRX_PIN A0
#define VRY_PIN A1

int valueX=0;
int valueY=0;

// Configuración de pines de la pantalla
UTFT myGLCD(ST7735S_4L_80160, 11, 13, 10, 8, 9);

extern uint8_t SmallFont[3];
extern uint8_t BigFont[];

// Variables para el tamaño de la pantalla
int screenWidth = 80;
int screenHeight = 160;

void setup() {
  // Inicialización de la pantalla
  myGLCD.InitLCD();
  
  // Configuración de la fuente de texto
  myGLCD.setFont(SmallFont);
  
  // Limpia la pantalla
  myGLCD.clrScr();
}

void loop() {
    valueX= analogRead(VRX_PIN);
  valueY= analogRead(VRY_PIN);
  
  // Convierte los valores a cadenas de texto
  char strValor1[10];
  dtostrf(valueX, 5, 0, strValor1); // convierte un int a string
  // Convierte los valores a cadenas de texto
  char strValor2[10];
  dtostrf(valueY, 5, 0, strValor2);
  
  // Pinta los valores en la pantalla
  myGLCD.setColor(255, 255, 255);
  myGLCD.print("Valor X: ", 10, 10);
  myGLCD.print(strValor1, 70, 10);

  myGLCD.print("Valor Y: ", 10, 30);
  myGLCD.print(strValor2, 70, 30);
  myGLCD.print("Rodrigo Vega - Clase 23", 10, 50);
  
  // Espera un momento para evitar refrescos excesivos de la pantalla
  delay(1000);

  Serial.print("x = ");
  Serial.print(valueX);
  Serial.print(", y = ");
  Serial.println(valueY);
}
