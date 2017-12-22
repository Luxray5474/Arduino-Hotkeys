const int rewindPin = 10;
const int pausePlayPin = 11;
const int fastForwardPin = 12;

const int ledPin = 13;
const int rewindLedPin = 6;
const int playLedPin = 8;
const int pauseLedPin = 9;
const int forwardLedPin = 7;

void setup() {
  Serial.begin(115200);
  pinMode(rewindPin, INPUT_PULLUP);
  pinMode(pausePlayPin, INPUT_PULLUP);
  pinMode(fastForwardPin, INPUT_PULLUP);
  
  pinMode(ledPin, OUTPUT);
  pinMode(rewindLedPin, OUTPUT);
  pinMode(playLedPin, OUTPUT);
  pinMode(pauseLedPin, OUTPUT);
  pinMode(forwardLedPin, OUTPUT);
}

void loop() {
  int RRstate = digitalRead(rewindPin);
  int PPstate = digitalRead(pausePlayPin);
  int FFstate = digitalRead(fastForwardPin);

  if(RRstate == LOW){
    digitalWrite(ledPin, HIGH);
    digitalWrite(rewindLedPin, HIGH);
    Serial.println("prev");
    delay(200);
    digitalWrite(ledPin, LOW);
    digitalWrite(rewindLedPin, LOW);
  }
  
  if(PPstate == LOW) {
    if(digitalRead(pauseLedPin) == HIGH) digitalWrite(playLedPin, HIGH);
    digitalWrite(pauseLedPin, !digitalRead(pauseLedPin));
    Serial.println("2");
    delay(200);
    if(digitalRead(playLedPin) == HIGH) digitalWrite(playLedPin, LOW);
  }
  if(FFstate == LOW){
    digitalWrite(ledPin, HIGH);
    digitalWrite(forwardLedPin, HIGH);
    Serial.println("3");
    delay(200);
    digitalWrite(ledPin, LOW);
    digitalWrite(forwardLedPin, LOW);
  }
}

