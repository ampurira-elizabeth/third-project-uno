
int red=1;
int yellow =3;
int green =4;
void setup()
{
 pinMode(red,OUTPUT);
 pinMode(green,OUTPUT);
 pinMode(yellow,OUTPUT);
  
}
void loop(){
  
     
   digitalWrite(green,HIGH);
   digitalWrite(yellow,LOW);
   delay(90000);
  
   
    digitalWrite(yellow, HIGH);
    digitalWrite(green, LOW);
    delay(5000);
  
   digitalWrite(red, HIGH);
   digitalWrite(yellow,LOW);
   delay(90000);
  
   digitalWrite(yellow,HIGH);
   digitalWrite(red,LOW);
   delay(5000);
  
  }
  
  
 
