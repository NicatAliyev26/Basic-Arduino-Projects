int lm35Pin = A0;
int led = 8;
#define buzzer 9
int vaxt = 50;
int oxunan_deyer = 0;
float istilik_gerginlik = 0;
float istilik = 0;

void setup() 
{
 
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
}
 
void loop()
{
  oxunan_deyer = analogRead(lm35Pin);
  istilik_gerginlik = (oxunan_deyer / 1023.0)*5000;
  istilik = istilik_gerginlik /10.0; 
  Serial.println(istilik);
  

  if(istilik >= 30){
    digitalWrite(led,HIGH);
    digitalWrite(buzzer,HIGH);
    delay(vaxt);
    digitalWrite(led,LOW);
    digitalWrite(buzzer,LOW);
    delay(vaxt);
  }
  else{

    digitalWrite(led,LOW);
    digitalWrite(buzzer,LOW);
    
    
  }
}