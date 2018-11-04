#include <LiquidCrystal.h>
#define Luz_Fundo 7

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  pinMode(Luz_Fundo, OUTPUT);
  digitalWrite(Luz_Fundo, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,0);
  lcd.print("Ola estranho!");
  lcd.setCursor(0,1);
  lcd.print("Tudo bem?");
}
