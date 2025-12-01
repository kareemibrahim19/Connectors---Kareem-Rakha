#include <SevenSegmentTitacon.h>

SevenSegmentTitacon display;
int buttonPin = 10;
int number = 0;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);

  display.start(4, 5, 8, 7, 6, 3, 2, 9, 0); 
  display.display(number);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) { 
    number++;
    if (number > 9) number = 0;

    display.display(number);
    delay(300);
}
