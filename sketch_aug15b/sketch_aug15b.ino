#include <LiquidCrystal.h>

LiquidCrystal lcd(7,6,5,4,3,2);

void setup() {
 ldc.begin(16, 2);
 ldc.clear();
}

void loop() {
  ldc.setCursor(3,0);
  lcd.print("Agostinho");
  lcd.setCursor(4,1);
  lcd.print("Dos santos");
  
}
