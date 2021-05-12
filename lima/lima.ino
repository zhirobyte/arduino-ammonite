
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display


void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);

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
  lcd.print("[13 may 2021]");
   
}


// the loop function runs over and over again forever
void loop() {
             digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(500);           // wait for a second
}
