int pinBuzzer = 9;

void setup(){
  pinMode(pinBuzzer, OUTPUT);
}

void loop(){
  tone(pinBuzzer, 1000);
  delay(5000);
  noTone();
}
