#include <LiquidCrystal.h>
#define MQ3pin 0
#define buzzer 4
#define relay 2
float sensorValue; //variable to store sensor value
LiquidCrystal lcd(6, 7, 8, 9, 10, 11);

void setup()
{
  pinMode(buzzer, OUTPUT);
  pinMode(relay, OUTPUT);
  digitalWrite(relay, HIGH);
  //lcd.print("warming up");
  //lcd.begin(16,2);
  //delay(3000);
  //lcd.clear();
  //Serial.begin(9600); // sets the serial port to 9600
  //Serial.println("MQ3 warming up!");

  lcd.begin(16, 2);
  lcd.print("warming up");
  //delay(3000);

  lcd.setCursor(1, 0);

  delay(30000);
  lcd.clear();
}

void loop()
{
  sensorValue = analogRead(MQ3pin); // read analog input pin 0

  //Serial.print("Sensor Value: ");
  //Serial.println(sensorValue);
  lcd.clear();
  if (sensorValue > 220)
  {
    //Serial.println("drunk");
    digitalWrite(buzzer, HIGH);
    digitalWrite(relay, HIGH);
    //lcd.clear();
    lcd.setCursor(3, 0);

    lcd.print("drunk");
    //delay(500);
    lcd.setCursor(0, 1);
    lcd.print(sensorValue);
    // delay(500);
  }
  else
  {
    //Serial.println("NOT drunk");
    digitalWrite(buzzer, LOW);
    digitalWrite(relay, LOW);
    //lcd.clear();
    lcd.setCursor(3, 0);

    lcd.print("not drunk");
    //delay(500);
    lcd.setCursor(0, 1);
    lcd.print(sensorValue);
    //delay(500);
  }
  delay(2000);
}

//#include<LiquidCrystal.h>
//#define MQ3pin 0
//#define buzzer 4
//#define relay 2
// float sensorValue;  //variable to store sensor value
// LiquidCrystal lcd(6,7,8,9,10,11);
//
// void setup(){
//       lcd.begin(16,2);
//     lcd.print("warming up");
//     delay(3000);
// lcd.clear();
// Serial.begin(9600); // sets the serial port to 9600
// Serial.println("MQ3 warming up!");
//  digitalWrite(relay,HIGH);
//  pinMode(buzzer,OUTPUT);
//   pinMode(relay,OUTPUT);
//     lcd.begin(16,2);
//     lcd.print("warming up");
//     delay(3000);
// lcd.clear();
// lcd.setCursor(1,0);
//
//
//  delay(20000);
//
//}
//
// void loop() {
// sensorValue = analogRead(MQ3pin); // read analog input pin 0
//
//  Serial.print("Sensor Value: ");
//  Serial.println(sensorValue);
//  lcd.clear();
//  if(sensorValue>200)
//  {
//
//    Serial.println("drunk");
//    digitalWrite(buzzer,HIGH);
//     digitalWrite(relay,HIGH);
////     lcd.clear();
// lcd.setCursor(3,0);
//
// lcd.print("drunk");
// delay(500);
// lcd.setCursor(0,1);
// lcd.print("cannot drive");
// delay(500);
//     }
//   else
//   {
//     Serial.println("NOT drunk");
//     digitalWrite(buzzer,LOW);
//     digitalWrite(relay,LOW);
////         lcd.clear();
// lcd.setCursor(3,0);
//
// lcd.print("not drunk");
// delay(500);
// lcd.setCursor(0,1);
// lcd.print("can drive");
// delay(500);
//     }
//     delay(2000);
//   }
