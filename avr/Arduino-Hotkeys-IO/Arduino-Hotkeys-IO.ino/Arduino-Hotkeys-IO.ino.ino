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
  int pauseState = 0;
  int FFstate = digitalRead(fastForwardPin);

  if(pauseState == 1) {
    digitalWrite(pauseLedPin, HIGH);
  } else {
    digitalWrite(pauseLedPin, LOW);
  }

  if(RRstate == LOW){
    digitalWrite(ledPin, HIGH);
    digitalWrite(rewindLedPin, HIGH);
    Serial.println("mac9");
    delay(200);
    digitalWrite(ledPin, LOW);
    digitalWrite(rewindLedPin, LOW);
  }
  
  if(PPstate == LOW){
    if(pauseState == 1) {
      pauseState = 0;
    } else {
      pause
    }
    digitalWrite(ledPin, HIGH);
    Serial.println("mac10");
    delay(200);
    digitalWrite(ledPin, LOW);
  }
  if(FFstate == LOW){
    digitalWrite(ledPin, HIGH);
    digitalWrite(forwardLedPin, HIGH);
    Serial.println("mac11");
    delay(200);
    digitalWrite(ledPin, LOW);
    digitalWrite(forwardLedPin, LOW);
  }
}

