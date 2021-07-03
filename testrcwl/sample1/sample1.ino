#include <Wire.h>                      
#include <LiquidCrystal_I2C.h>       
#include <Wire.h> 

///ini adalah detect untuk bagian rcwl
int detectPin = 10;
bool detect = false;
int led = 13;
int gerak = 900;

//ini adalah lcd fom github zhirobyte

int led_pin = 5;
byte leds = 0;

LiquidCrystal_I2C lcd(0x27,20,4);       // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup() {
 Serial.begin(115200);
lcd.begin(20,4);
 pinMode (detectPin, INPUT);
 pinMode (led, OUTPUT);

  pinMode(led_pin, OUTPUT);

  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  lcd.init();
  lcd.setCursor(0,1);
  lcd.print("Booting up.");

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
   lcd.print("Total data record");
   
 for (int i=0; i<=999999; i++){


  lcd.setCursor(0,1);            

  lcd.print("Object RCLW micro");
  int gerak = i;
  lcd.setCursor(0,2);
  lcd.print("n :");
  lcd.print(gerak);
  lcd.setCursor(0,3);
  lcd.print("test v1.1");

  
             

  
 //delay sendiri untuk pas iteration bukan untuk else condition (waiting)
 delay(100);
      }
  

  }
 else {
 digitalWrite(led, LOW);
 lcd.backlight();
  lcd.print("..");
 }
 delay(3000);
}
