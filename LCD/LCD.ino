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
 */


#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup(){
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
}

void loop(){
  lcd.print("Susu");
  //btw lcd.setCursor(COL, ROW);
  lcd.setCursor(0, 1);
  lcd.print("102 Fahrenheit");
}
