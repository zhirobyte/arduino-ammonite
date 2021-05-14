
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

//mendeklarasikan sebuah variable pin pada servo
int servoPin = 3;
//membuat object untuk servo
Servo Servo1;

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display


void setup() {

  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  lcd.init();                      // initialize the lcd 
  // We need to attach the servo to the used pin number 

  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(8,0);
  lcd.print("zero");
  lcd.setCursor(4,1);
  lcd.print("Hello, world!");
  lcd.setCursor(2,2);
  lcd.print("ammonite is live");
  lcd.setCursor(4,3);
  lcd.print("[14 may 2021]");
      Servo1.attach(servoPin); 
   
}



// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1100);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1100);      
   //sebuah function utuk servo // wait for a second
  // Make servo go to 0 degrees 
   Servo1.write(0); 
   delay(1000); 
   // Make servo go to 90 degrees 
   Servo1.write(90); 
   delay(1000); 
   // Make servo go to 180 degrees 
   Servo1.write(180); 
   delay(1000);
  
}
