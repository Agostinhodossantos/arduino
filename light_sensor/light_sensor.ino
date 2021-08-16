#define ldr A0
#define ptm A1
#define led 2
int vldr = 0;
int vlptc = 0;



void setup() {
  pinMode(ldr, INPUT);
  pinMode(ptm, INPUT);
  pinMode(led, OUTPUT);

  Serial.begin(9600);

}

void loop() {
  vldr = analogRead(ldr);
  vlptc = analogRead(ptm);
  
  if (vldr < vlptc) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
  Serial.println(vlptc);
  //Serial.println(vldr);
  delay(100);

}
