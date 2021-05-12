
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display


void setup() {
    lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(8,0);
  lcd.print("zero");
  lcd.setCursor(4,1);
  lcd.print("Hello, world!");
  lcd.setCursor(2,2);
  lcd.print("ammonite is live");
  lcd.setCursor(4,3);
<<<<<<< HEAD
  lcd.print("[13 may 2021]");
=======
  lcd.print("[08 may 2021]");
>>>>>>> b3452d916ffcbd0fd3d2f69262c7faa8a2f259d3
}


  


void loop()
{
}
