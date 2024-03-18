/*
 * //ASUMSI: UDAH INSTALL LIBRARY DHT
 * 
 * < DHT Sensor />
 * - VCC  : 5V ( + )
 * - Data : 3
 * - GND  : ( - )
*/

#include "DHT.h"
#define DHTPIN 9     
#define DHTTYPE DHT11  
DHT dht(DHTPIN, DHTTYPE);
float h, t, f;

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  h = dht.readHumidity();
  t = dht.readTemperature();
  f = dht.readTemperature(true);

  Serial.print(F("Humidity: "));
  Serial.print(h);
  Serial.print(F("%  Temperature: "));
  Serial.print(t);
  Serial.print(F("°C "));
  Serial.println(f);
}