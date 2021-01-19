#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <BigFont02_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); //address, columns, rows
BigFont02_I2C     big(&lcd); // construct large font object, passing to it the name of our lcd object

void setup()
{
  lcd.begin();
  big.begin();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.write ('  BigFont02_I2C ');
  lcd.setCursor(0,1);
  lcd.write ('  ============= ');
  delay(2000);
  lcd.clear();
}

void loop()
{
  big.writeint(0,3,millis(),4,true); // display milliseconds value using 4 digits with leading zeros enabled starting at row 0 column 5
}
