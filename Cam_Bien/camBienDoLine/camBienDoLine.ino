#define Line 2
int val = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  val = digitalRead(LINE)
  Serial.println(val);
  delay(500);
}
