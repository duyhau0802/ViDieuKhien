//int in1=9;
//int in2=10;
int in3=11;
int in4=12;
#define enB 5
void setup() {
//  pinMode(in1,OUTPUT);
//  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(enB, OUTPUT);
}

void loop() {
  tien();
  delay(2000);
  dung();
  delay(1000);
  lui();
  delay(2000);
  dung();
  delay(1000);
}
void tien() {
//  digitalWrite(in1,HIGH);
//  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  analogWrite(enB,20);
}
void lui() {
//  digitalWrite(in1,LOW);
//  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  analogWrite(enB,20);
}
void dung() {
//  digitalWrite(in1,LOW);
//  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);  
}
