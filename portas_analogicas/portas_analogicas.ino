#define led 10
#define maximo 255
#define minimo 0
#define tmp 100

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  for(int i = minimo; i < maximo; i++) { 
    analogWrite(led, i);
    delay(tmp);
  }

  for(int i = maximo; i > minimo; i--) {
    analogWrite(led, i);
    delay(tmp);
  }
}
