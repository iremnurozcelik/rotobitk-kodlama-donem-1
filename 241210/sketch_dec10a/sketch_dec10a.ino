void setup()
{
  pinMode(2, OUTPUT);//LED çıkış yapıldı.
  pinMode(3, OUTPUT);//LED çıkış yapıldı.
  pinMode(4, INPUT);//4 numaralı pin giriş yapıldı.
  
}

void loop()
{
  if (digitalRead(4)==1)//4 numaralı uca bağlanan buton okunur.
  {
    digitalWrite(2, 1);
    digitalWrite(3, 0);  

  }
  else 
  {
   digitalWrite(2, 0);
   digitalWrite(3, 1); 
  }
}
