// button pins
const int buttonRed = 2;
const int buttonGreen = 3;
const int buttonBlue = 4;

// LED pins
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;


void setup() {
    // Set buttons as inputs
    pinMode(buttonRed, INPUT_PULLUP);
    pinMode(buttonGreen, INPUT_PULLUP);
    pinMode(buttonBlue, INPUT_PULLUP);

    // Set LED pins as output
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redPin, HIGH);

}
