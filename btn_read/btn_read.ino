#define led 4
#define btn 3
int btnClicked = 0;
int btnFree = 0;

void changeLed() {
  if (digitalRead(led) == HIGH) {
    digitalWrite(led, LOW);
  } else {
    digitalWrite(led, HIGH);
  }
}

void keyup() {
  if((btnClicked == 1) and (btnFree == 1)) {
    btnClicked = 0;
    btnFree = 0;
    changeLed();
  }
}

void setup() {
  pinMode(btn, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  if (digitalRead(btn) == HIGH) {
    btnClicked = 1;
    btnFree = 0;
  } else {
    btnFree = 1;
  }

  keyup();
}
