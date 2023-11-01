#include <IRremote.h>
const int RECV_Pin = 11;
const int LED_Pin = 13;

IRrecv irrecv(RECV_Pin);
decode_results results;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();

  pinMode(LED_Pin, OUTPUT);
}

void loop() {
  if (irrecv.decode(&results)) {
    if (results.bits > 0) {
      Serial.println(results.value, HEX);
      int state;
      if (0x101 == results.value) {
        state = HIGH;
      } else {
        state = LOW;
      }
      digitalWrite(LED_Pin, state);
      Serial.println(state);
    }
    irrecv.resume();
  }
}
