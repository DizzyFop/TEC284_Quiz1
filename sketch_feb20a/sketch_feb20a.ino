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
  checkButtons();
}

void checkButtons(){
      // Check for red button
    if (digitalRead(buttonRed) == LOW) {
        digitalWrite(redPin, HIGH);
    } else {
        digitalWrite(redPin, LOW);
    }
        // Check for green button
    if (digitalRead(buttonGreen) == LOW) {
        digitalWrite(greenPin, HIGH);
    } else {
        digitalWrite(greenPin, LOW);
    }
    // Check for blue button
    if (digitalRead(buttonBlue) == LOW) {
        digitalWrite(bluePin, HIGH);
    } else {
        digitalWrite(bluePin, LOW);
    }
}
