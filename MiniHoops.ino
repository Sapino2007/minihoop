int motionSensorPin = 2;


int ledPin = 10;
  int ledPin2 = 7;
    int ledPin3 = 6;
      int ledPin4 = 5;
        int ledPin5 = 4;
          int ledPin6 = 3;




void setup() {

  pinMode(motionSensorPin, INPUT);


  pinMode(ledPin, OUTPUT);
    pinMode(ledPin2, OUTPUT);
      pinMode(ledPin3, OUTPUT);
        pinMode(ledPin4, OUTPUT);
          pinMode(ledPin5, OUTPUT);
            pinMode(ledPin6, OUTPUT);



    

}

void loop() {

  int motionSensorState = digitalRead(motionSensorPin);


  if (motionSensorState == HIGH) {
    digitalWrite(ledPin, HIGH);
      digitalWrite(ledPin2, HIGH);
        digitalWrite(ledPin3, HIGH);
          digitalWrite(ledPin4, HIGH);
            digitalWrite(ledPin5, HIGH);
              digitalWrite(ledPin6, HIGH);


  } else {
    digitalWrite(ledPin, LOW);
      digitalWrite(ledPin2, LOW);
        digitalWrite(ledPin3, LOW);
          digitalWrite(ledPin4, LOW);
            digitalWrite(ledPin5, LOW);
              digitalWrite(ledPin6, LOW);



  }
}
