#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

///ini adalah detect untuk bagian rcwl
int detectPin = 10;
bool detect = false;
int led = 13;


//ini adalah lcd fom github zhirobyte

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

int gerak = 0;

void setup() {
 Serial.begin(115200);

 pinMode (detectPin, INPUT);
 pinMode (led, OUTPUT);
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  lcd.init();

}

void loop() {

 detect = digitalRead(detectPin);
 if(detect == true) {
 digitalWrite(led, HIGH);
  lcd.backlight();
  lcd.print("1 found");
 }
 else {
 digitalWrite(led, LOW);
  lcd.print("...");
 }
 delay(2000);
}
