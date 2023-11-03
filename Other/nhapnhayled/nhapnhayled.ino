int value = 0;
setup(){
  pinMode(A0,INPUT);
  pinMode(13,OUTPUT);
  }
loop(){
  inputCensor = digitalRead(A0);
  digitalWrite(13,HIGH);
  delay(inputCensor);
  digitalWrite(13,LOW);
  delay(inputCensor);
}
