#include <IRremote.h>

#define bt1 8
#define bt2 9

IRsend irsend;
unsigned long valor;
decode_results res;
decode_type_t tipo;


void setup() {
 Serial.begin(9600);
 pinMode(bt1, INPUT);
 pinMode(bt2, INPUT);
}

void loop() {
  if (digitalRead(bt1) == 1) { // LEFT
    valor = 0xFF22DD;
    irsend.sendRC5(valor, 12);
    Serial.println(valor, HEX);
    tipo = res.decode_type;
    Serial.println(tipo);
  } else if(digitalRead(bt2) == 1) { // RIGHT
    valor = 0xFF22DD;
  }
}
