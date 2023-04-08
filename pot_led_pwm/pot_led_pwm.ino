#define led 3
#define pot A0

void setup() {


}

void loop() {
  int deger = analogRead(pot);
  // analogRead 0-1023 arasinda oxuyur, amma analogWrite 0-255 arasindaki degeri oxuya bilir, buna gorede deger 4-e boluruk 
  deger = map(deger,0,1023,0,255); // deger= deger/4; belede yazmaq olur
  analogWrite(3,deger);

}
