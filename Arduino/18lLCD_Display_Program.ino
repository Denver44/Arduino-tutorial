// 20*4 lcd display program
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);
void setup()
{
  Wire.begin(12, 13);
  lcd.init();      // initializing the LCD
  lcd.backlight(); // Enable or Turn On the backlight

  lcd.print("DURGESH RAI"); // Start Printing
  lcd.setCursor(0, 1);
  lcd.print("GEETA RAI"); // Start Printing
  lcd.setCursor(0, 2);
  lcd.print("PRIYA RAI"); // Start Printing
  lcd.setCursor(0, 3);
  lcd.print("POOJA RAI"); // Start Printing
  delay(1000);
}
void loop()
{
}