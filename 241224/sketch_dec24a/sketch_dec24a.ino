void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);

}

void loop() {
  String girilen_deger="";
  if(Serial.availabe())//herhangi bir tusa basıldı mı?
  //seri porta girdi olup olmadığını kontrol eder
  //eger girdi varsa okur ve yazdırır
  girilen_deger= Serial.readString();//seri porttan deger okunur
  Serial.print("Girilen değer");
  Serial.println(girilen_deger);

  if (girilen_deger=="Kırmızı") {
    digitalWrite(3,1);
    delay(3000);
    digitalWrite(3,0);

    if (girilen_deger=="Sarı"){
      digitalWrite(4,1);
      delay(3000);
      digitalWrite(4,0);
    }
  }
}
