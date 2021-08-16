#define led 10
#define led_2 11
#define led_3 12

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
}

void loop()
{
  verde(200);
  amarelo(200);
  vermelho(200);
}

void verde(int tmp) {
  digitalWrite(led, HIGH);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, LOW);
  delay(tmp);
}

void amarelo(int tmp) {
  digitalWrite(led, LOW);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, LOW);
  delay(tmp);
}

void vermelho(int tmp) {
  digitalWrite(led, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, HIGH);
  delay(tmp);
}
