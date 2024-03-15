/*
 * < LED />
 * CATHODE  (pendek)  : GND
 * ANODE    (panjang) : PIN 6
*/

int LED = 6;

void setup()
{
    pinMode(LED, OUTPUT);
}

void loop()
{
    digitalWrite(LED, HIGH);
}
