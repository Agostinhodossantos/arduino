#define <TimerOne.h>

#define led_alarme_pino 7
#define led_armado_pino 13
#define btn 2

int led_alarme = LOW;
int led_armado = LOW;
bool armado = false;

void setup() {
  pinMode(led_alarme_pino, OUTPUT);
  pinMode(led_armado_pino, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(btn), toogle_alarme);
}

void loop() {
  
}

void alarme() {
  digitalWrite(led_alarme, !digitalRead(led_alarme));
}

void toogle_alarme() {
  if (armado){
    
  }
}
