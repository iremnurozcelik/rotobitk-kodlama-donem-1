int sari=3;
int mavi=4;
int İ=5;
string girilen= "";
void setup() {
  
   Serial.begin(9600);//seri ekran başlatılır
   pinMode(sari,OUTPUT);
   pinMode(mavi,OUTPUT);
   Serial.print("Sarı için S , mavi için M'ye bas = "); //ekrana yaz
}

void loop() {
  if (Serial.available()) // seri ekrandan giriş yapıldı mı ?
  {
    girilen= Serial.readString(); // seri ekrandan bilgi oku
    Serial.println(girilen);

    if (girilen=="S") {
      Serial.println("Sarı yandı.");
      digitalWrite(sari,1);
      delay(3000);
      digitalWrite(sari,0);

      if (girilen=="M") {
      Serial.println("Mavi yandı.");
      digitalWrite(mavi,1);
      delay(3000);
      digitalWrite(mavi,0);}
      int sari=3;
int mavi=4;
string girilen= "Girilen değer = ";
void setup() {
  
   Serial.begin(9600);//seri ekran başlatılır
   pinMode(sari,OUTPUT);
   pinMode(mavi,OUTPUT);
   Serial.print("Sarı için S , mavi için M'ye bas = "); //ekrana yaz
}

void loop() {
  if (Serial.available()) // seri ekrandan giriş yapıldı mı ?
  {
    girilen= Serial.readString(); // seri ekrandan bilgi oku
    Serial.println(girilen);

    if (girilen=="S") {
      Serial.println("Sarı yandı.");
      digitalWrite(sari,1);
      delay(3000);
      digitalWrite(sari,0);

      if (girilen=="M") {
      Serial.println("Mavi yandı.");
      digitalWrite(mavi,1);
      delay(3000);
      digitalWrite(mavi,0);}

      int sari=3;
int mavi=4;
string girilen= "Girilen değer = ";
void setup() {
  
   Serial.begin(9600);//seri ekran başlatılır
   pinMode(sari,OUTPUT);
   pinMode(mavi,OUTPUT);
   Serial.print("Sarı için S , mavi için M'ye bas = "); //ekrana yaz
}

void loop() {
  if (Serial.available()) // seri ekrandan giriş yapıldı mı ?
  {
    girilen= Serial.readString(); // seri ekrandan bilgi oku
    Serial.println(girilen);

    if (girilen=="S") {
      Serial.println("Sarı yandı.");
      digitalWrite(sari,1);
      delay(3000);
      digitalWrite(sari,0);

      if (girilen=="M") {
      Serial.println("Mavi yandı.");
      digitalWrite(mavi,1);
      delay(3000);
      digitalWrite(mavi,0);}

      if (girilen=="İ") {
      Serial.println("İkisi yandı.");
      digitalWrite(sari,1);
      digitalWrite(mavi,1);
      delay(3000);
      digitalWrite(mavi,0);
      digitalWrite(sari,0);}
    }
  }

    }
  }

}
    }
  }

}
