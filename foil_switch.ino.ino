int switchPin = 2;   //this creates a variable named switchPin and sets its value to 2, meaning we will use digital pin 2 to read the foil switch
int ledPin = 13;     //this creates a variable named ledPin and sets it to 13, meaning we will use digital pin 13 to control the led

void setup() {
  pinMode(switchPin, INPUT);   //this tells the arduino that pin 2 will be used as an input, so it can read whether the foil switch is touched or not
  pinMode(ledPin, OUTPUT);     //this tells the arduino that pin 13 will be used as an output, so it can turn the led on or off
}

void loop() {
  int state = digitalRead(switchPin);   //this reads the current voltage on pin 2; it will be high when the elbow connects the foils, and low when not touching

  if (state == HIGH) {                  //this checks if the foil switch is being touched (high means 5v is reaching pin 2)
    digitalWrite(ledPin, HIGH);         //this turns the led on by sending 5v to pin 13
  } else {                              //this runs when the foil switch is not touched (which means that the state is low)
    digitalWrite(ledPin, LOW);          //this turns the led off by sending 0v to pin 13
  }
}

