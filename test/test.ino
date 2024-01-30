#include <LiquidCrystal.h>
void setup() {
  // put your setup code here, to run once:
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
lcd.begin(16, 2); //Initiate the LCD in a 16x2 configuration
lcd.print("My name is:");
lcd.setCursor(0, 1);
lcd.print("Vidal!");
}
void loop() {
  // put your main code here, to run repeatedly:
  delay(50); //Wait 50 ms
}
