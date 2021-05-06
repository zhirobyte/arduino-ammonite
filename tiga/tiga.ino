#include <LiquidCrystal_I2C.h>

#include <Wire.h> 
#include <LiquidCrystal.h>

LiquidCrystal lcd(2,3,4,5,6,7);
void setup(){
  lcd.begin(20,4);
  lcd.setCursor(0,0);
  lcd.print("Zhirobyte");
  lcd.setCursor(3,1);
  lcd.print("Ammonite");
  
  }

  void loop(){
    
  }
