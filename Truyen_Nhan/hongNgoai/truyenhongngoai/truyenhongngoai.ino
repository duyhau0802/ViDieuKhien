#include <IRremote.hpp>

IRsend irsend(3);

void setup(){
  }

void loop(){
irsend.sendRC5(0x0, 8);
delay(200);
irsend.sendRC5(0x1, 8);
delay(200);
  }
