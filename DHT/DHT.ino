/*
 * //ASUMSI: UDAH INSTALL LIBRARY DHT
 * 
 * < DHT Sensor />
 * - VCC  : 5V ( + )
 * - Data : 2
 * - GND  : ( - )
*/

#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup(){
  Serial.begin(9600);
  dht.begin();
}


void loop(){
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print("Celcius: ");
  Serial.print(t);
  Serial.println("*C");

}
