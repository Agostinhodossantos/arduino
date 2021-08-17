#define som 9

void setup() {
 pinMode(som, OUTPUT);
}

void loop() {
 tone(som, 500, 100);
 delay(100);
 delay(100);
  tone(som, 500, 100);
 delay(100);
 delay(100);
 
 delay(5000);
}
