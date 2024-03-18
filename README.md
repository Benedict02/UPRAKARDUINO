# UPRAK ARDUINO
Ujian Praktek Arduino
The code & stuff that might help while facing UPRAK TIK.

**Note: I haven't added servo & photoresistor.**
Fun fact: use analogWrite() when you're using a PWM pin.

```
analogWrite(myPin, 0 - 255);
```

The website documentation can be found here:
### SERVO
https://docs.arduino.cc/learn/electronics/servo-motors/

**SERVO NEEDS TO BE PLUGGED INTO A PWM PIN.**
code from bing copilot:
```
#include <Servo.h>

Servo myservo;  // create servo object to control a servo

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  myservo.write(90);  // tell servo to go to position 90 degrees
  delay(1000);        // wait 1 second
  myservo.write(0);   // tell servo to go to position 0 degrees
  delay(1000);        // wait 1 second
}
```


### PHOTORESISTOR
https://projecthub.arduino.cc/tropicalbean/how-to-use-a-photoresistor-1143fd
BTW, photoresistor does NOT have to be plugged in a PWM pin.


*code forom web*
```
#define PHOTO_RESISTOR_PIN A0 // Analog input pin that the photoresistor is attached to

void setup() {
  Serial.begin(9600);
}

void loop() {
  int photoResistorValue = analogRead(PHOTO_RESISTOR_PIN);
  Serial.println(photoResistorValue);
  delay(100);
}
```

```
bisa lah ez cmn colok colok kabel trus di ketikin code
```
