#include <Wire.h>                      
#include <LiquidCrystal_I2C.h>       
#include <Wire.h> 

///ini adalah detect untuk bagian rcwl
int detectPin = 10;
bool detect = false;
int led = 13;
int gerak = 0;

//ini adalah lcd fom github zhirobyte

int led_pin = 5;
byte leds = 0;

LiquidCrystal_I2C lcd(0x27,20,4);       // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup() {
 Serial.begin(115200);

 pinMode (detectPin, INPUT);
 pinMode (led, OUTPUT);

  pinMode(led_pin, OUTPUT);

  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  lcd.init();
  lcd.setCursor(0,0);
  lcd.print("Booting up");
  lcd.print("...");
}

void loop() {

 detect = digitalRead(detectPin);
 if(detect == true) {
 digitalWrite(led, HIGH);
 //untuk iterasi dengan jumlah sekian
 //
   lcd.init();   
   lcd.backlight();   
   lcd.setCursor(0,0);                  
   lcd.print("Jumlah data terkini!");
   
 for (int i=0; i<=500; i++){


  lcd.setCursor(0,2);            

  lcd.print("Object detect:");
  int gerak = i;
  lcd.print("Found");
             

  
 //delay sendiri untuk pas iteration bukan untuk else condition (waiting)
 delay(100);
      }
  

  }
 else {
 digitalWrite(led, LOW);
 lcd.backlight();
  lcd.print("...");
 }
 delay(3000);
}
