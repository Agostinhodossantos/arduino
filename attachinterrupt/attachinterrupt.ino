#include "Btn.h"

#define btn_pin 0 // Int 0 = Pino 2
int cont;

Btn btn = new Btn(btn_pin);

void setup() {
  attachInterrupt(btn_pin, reset, RISING);
  //LOW
  //
 cont = 100;
 pinMode(btn_pin, INPUT);
 Serial.begin(9600);
}

void loop() {
 for (cont = 100; cont > 0; i--) {
  Serial.println(cont);
  delay(250);
 }

 Serial.println("Reniciando contagem");

 btn.clique();
 
 
}

void reset() {
  cont = 100;
}
