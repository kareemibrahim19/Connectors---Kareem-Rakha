#define ir 2
int count = 0;
bool prevReading = HIGH;

void setup() {
  pinMode(ir, INPUT);
  Serial.begin(9600);
  
}

void loop() {
  int state = digitalRead(ir);
  if (state == LOW && prevReading == HIGH){
    count++;
    Serial.println("Object Detected!");
    Serial.print("Objects count = ");
    Serial.println(count);
  }

  prevReading = state;
  delay(200);
}
