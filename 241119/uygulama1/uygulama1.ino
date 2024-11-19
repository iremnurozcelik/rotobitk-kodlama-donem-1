// C++ code
//
//GLOBAL (HER YERDE GEÇERLİ) DEĞİŞKEN
int kirmizi=2;
int beyaz=3;
void setup()//AYAR BÖLÜMÜ 1 KEZ ÇALIŞIR
{
  pinMode(kirmizi, OUTPUT);//2 numaralı uc çıkış 
  pinMode(beyaz, OUTPUT);//3 numaralı uc çıkış 
}

void loop()//SÜREKLİ OLARAK TEKRARLAYAN BÖLÜM (SONSUZ DÖNGÜ)
{
  digitalWrite(kirmizi, 1);
  digitalWrite(beyaz, 0);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(kirmizi, 0);
  digitalWrite(beyaz, 1);
  delay(1000); // Wait for 1000 millisecond(s)
}
