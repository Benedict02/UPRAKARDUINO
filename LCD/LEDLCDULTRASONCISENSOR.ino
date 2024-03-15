/* 
 * PAKE AKUN LAMA: https://drive.google.com/drive/folders/16VimGUXJ9RwraFPLu5IwYqFshHOmeesw?usp=drive_link
 * 
 * < LCD />
 * - Pin VSS : ke GND + potensio kaki kiri
 * - Pin VDD : ke 5V + potensio kaki kanan
 * - Pin V0 : kaki tengah Potensiometer (untuk mengatur kecerahan lcd)
 * - Pin RS : Pin 12
 * - Pin RW : GND
 * - Pin E : Pin 11
 * - Pin D4 : Pin 5
 * - Pin D5 : Pin 4
 * - Pin D6 : Pin 3
 * - Pin D7 : Pin 2
 * - Pin A : + resistor 1K +5V
 * - Pin K : GND
 * 
 * < LED />
 * - Cathode (yg pendek)  : GND
 * - Anode   (yg panjang) : 8
 * < ULTRASONIC SENSOR />
 * - Pin Trig : 6
 * - Pin Echo : 7
 * 
 * < BUZZER />
 * - Pin ( + ) : Pin 9
 * - Pin ( - ) : GND (-)
 */

#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int pins[] = {6, 7, 8, 9};
long t;
int distance;
void setup(){
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  pinMode(pins[0], OUTPUT);
  pinMode(pins[1], INPUT);
  pinMode(pins[2], OUTPUT);
  pinMode(pins[3], OUTPUT);
  Serial.begin(9600);
}
void loop(){
  digitalWrite(pins[0], LOW);
  delayMicroseconds(2);
  digitalWrite(pins[0], HIGH);
  delayMicroseconds(10);
  digitalWrite(pins[0], LOW);
  t = pulseIn(pins[1], HIGH);
  distance = t*0.034/2;
  Serial.println("Jarak: ");
  Serial.println(distance);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(distance);
  lcd.print("cm");
  if(distance<40){
    lcd.setCursor(0, 1);
    lcd.print("Bahaya!");
    digitalWrite(pins[2], HIGH);
    digitalWrite(pins[3], HIGH);
  }
  else{
    digitalWrite(pins[2], LOW);
    lcd.setCursor(0, 1);
    lcd.print("         ");
    digitalWrite(pins[3], LOW);
 }
 delay(200);
}
