vvoid setup()
{
  pinMode(10,OUTPUT);//Blue
  pinMode(11,OUTPUT);//Red
  pinMode(9,OUTPUT);//Green
  pinMode(4,INPUT);//pushButton
}

void loop()
{
  if(digitalRead(4) == HIGH)
  {
    digitalWrite(10,HIGH);//Blue
    delay(100);
    digitalWrite(10,LOW);
    delay(100);


    digitalWrite(9,HIGH);//Green
    delay(100);
    digitalWrite(9,LOW);
    delay(100);


    digitalWrite(11,HIGH);//Red
    delay(100);
    digitalWrite(11,LOW);
    delay(100);
  }
  
}
