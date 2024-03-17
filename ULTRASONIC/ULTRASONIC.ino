/*
 * < ULTRASONIC SENSOR />
 * - Trig : Pin 6
 * - Echo : Pin 7
*/

int trigPin = 6;
int echoPin = 7;
long t;
int distance;

void setup(){
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  distance = t*0.034/2;
  Serial.println("Jarak: ");
  Serial.println(distance);
}
