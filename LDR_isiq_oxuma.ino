
#define led 3

void setup() {

  pinMode(led, OUTPUT);
  Serial.begin(9600);



}

void loop() {

  int isik = analogRead(A0);
  Serial.println(isik);

 if (isik>390){
   digitalWrite(led, LOW);
 }
 if (isik<390){
   digitalWrite(led,HIGH);
 }

}