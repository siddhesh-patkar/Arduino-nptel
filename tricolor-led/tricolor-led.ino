void setup() {
  // put your setup code here, to run once:
  pinMode(10,OUTPUT);//Blue
  pinMode(11,OUTPUT);//Red
  pinMode(9,OUTPUT);//Green

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(10,HIGH);//Blue
  delay(500);
  digitalWrite(10,LOW);
  delay(500);
  
  
  digitalWrite(9,HIGH);//Green
  delay(500);
  digitalWrite(9,LOW);
  delay(500);
  
  
  digitalWrite(11,HIGH);//Red
  delay(500);
  digitalWrite(11,LOW);
  delay(500);
  

}
