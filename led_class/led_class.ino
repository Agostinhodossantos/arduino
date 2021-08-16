#define ledR 2
#define ledG 4
#define ledB 3
#define btn 7
#define max_color 3

int btnClicked = 0;
int btnFree = 0;
int circle = 0;

void red() {
  digitalWrite(ledR, HIGH);
  digitalWrite(ledG, LOW);
  digitalWrite(ledB, LOW);
}

void green() {
  digitalWrite(ledR, LOW);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledB, LOW);
}

void blue() {
  digitalWrite(ledR, LOW);
  digitalWrite(ledG, LOW);
  digitalWrite(ledB, HIGH);
}

void changeLed() {
  if (circle == 0) {
    red();
  } else if(circle == 1) {
    green();
  } else if(circle == 2) {
    blue();
  } 
  circle++;
  if (circle > max_color - 1) {
    circle = 0;
  }
}

void checkBtn() {
  if (digitalRead(btn) == HIGH) {
    btnClicked = 1;
    btnFree = 0;
  } else {
    btnFree = 1;
  }
  
  if ((btnClicked == 1) and (btnFree == 1)) {
    btnClicked = 0;
    btnFree = 0;
  }
}

void setup() {
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(btn, INPUT);
}

void loop() {
  green();
  delay(600);
  red();
  delay(1000);
  blue();
    green();
  delay(1000);
 // checkBtn(); 
}
