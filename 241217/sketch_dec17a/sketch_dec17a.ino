void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
}

void loop()
{
  if(digitalRead(3)==1) 
  {
    digitalWrite(9,1);
    delay(5000);
  }
  if ( digitalRead(4)==1)
  {
    digitalWrite(10,1);
    delay(5000);
  }
  
  
    digitalWrite(3,0);
    digitalWrite(4,0);
  
}
