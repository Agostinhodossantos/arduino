#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x27,20,4); 


void setup() {
  lcd.begin(16, 2);
  lcd.backlight();
}

void loop() {
lcd.home();
lcd.print("CFB  cursos");
lcd.setCursor(0, 1);
lcd.print("Curso de arduino");
delay(1000);
lcd.clear();
delay(1000);  
}
