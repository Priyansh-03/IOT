#include <LiquidCrystal.h>

LiquidCrystal lcd(1,2, 4, 5, 6,7);
/* A simple program to sequentially turn on and turn off 3 LEDs */ 

void setup() {
  lcd.begin(16,2);
}


void loop() {
  lcd.print("Hello");
  delay(3000);

  lcd.setCursor(2,1);
  lcd.print("This is LCD");
  delay(3000);

  lcd.clear();

  lcd.blink();
  delay(4000);

  lcd.setCursor(7,1);

  lcd.noBlink();

  lcd.cursor();
  delay(4000);
  lcd.noCursor();

  lcd.clear();

}
