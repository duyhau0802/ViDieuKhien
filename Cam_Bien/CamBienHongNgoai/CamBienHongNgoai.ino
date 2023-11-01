const int InfraredPin = 2;
const int LED = 13;
void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(InfraredPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  if(digitalRead(InfraredPin) == HIGH) {
    digitalWrite(LED, HIGH);
    Serial.println("anything move in!");
  }
  else {
    digitalWrite(LED, LOW);
    Serial.println("this is nothing");
  }
  delay(1000);
}
