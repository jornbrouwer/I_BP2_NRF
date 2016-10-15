/*
* Internet of Things - Things
* Button -test
* https://www.arduino.cc/en/Tutorial/Button
*/

const int buttonPin = 2;      //Aansluiting van de button op pin 2
const int ledPin = 13;        //Led pin

int buttonState = 0;          //Tijdelijke variable voor status button

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Starting Code"); 
  pinMode(ledPin, OUTPUT);        //ledPin = output
  pinMode(buttonPin, INPUT);      //initialiseren button als input 
}

void loop() {
  checkButton();
}

void checkButton(){
  buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);
  
  //check of de knop is ingedrukt
  //zo ja, doe iets.
  if (buttonState == HIGH) {
    Serial.println("de knop is ingedrukt");
    digitalWrite(ledPin, HIGH);
  } else {
    //Serial.println("niets");
    digitalWrite(ledPin, LOW);
  }
}
