int flamePin = A0;
int buzzerPin = 8;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int flameValue = digitalRead(flamePin);

  if (flameValue < 500) {
    digitalWrite(buzzerPin, HIGH);
  } 
  else {
    digitalWrite(buzzerPin, LOW);
  }

  delay(100);
}
