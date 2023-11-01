int ALARM = 4;
int LM35 = 0 ;
float tmprVal = 0;
float sinVal;
int toneVal;
unsigned long tepTimer;

void setup(){
  Serial.begin(9600);
  pinMode(ALARM, OUTPUT);
  }
  void loop(){
     int val = analogRead(LM35);
     tmprVal = (float) val * (5 / 10.24);
    
    if (tmprVal < 27){
      for (int x = 0; x <100 ; x++){
        sinVal = (sin(x * (3.1412 / 180)));
        toneVal = 2000 + (int(sinVal *1000));
        tone(ALARM, toneVal);
        delay(2);
        }
      }
    else {
      noTone(ALARM);
      }
     if (millis() - tepTimer > 50) {
      tepTimer = millis();
      Serial.print("temperature: ");
      Serial.print(tmprVal);
      Serial.println("C");
     }
      }
