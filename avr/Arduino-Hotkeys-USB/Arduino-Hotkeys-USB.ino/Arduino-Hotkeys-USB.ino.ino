/*
  Copyright (c) 2014-2015 NicoHood
  See the readme for credit to other people.
  Improved Keyboard example
  Shows how to use the new Keyboard API.
  See HID Project documentation for more information.
  https://github.com/NicoHood/HID/wiki/Keyboard-API#improved-keyboard
*/

#include "HID-Project.h"

void setup() {
  Serial1.begin(115200);

  // Sends a clean report to the host. This is important on any Arduino type.
  Consumer.begin();
  Serial.begin(115200);
  Serial1.flush();
}

void loop() {
  char sKey = Serial1.read();
  Serial.write(sKey);
  
  if (sKey = "mac9") {
    Consumer.write(MEDIA_PREVIOUS);
    return;
  }
  if (sKey = "mac10") {
    Consumer.write(MEDIA_PLAY_PAUSE);
    return;
  }
  if (sKey = "mac11") {
    Consumer.write(MEDIA_NEXT);
    return;
  }
}
