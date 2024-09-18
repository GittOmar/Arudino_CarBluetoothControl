#include <SoftwareSerial.h>

SoftwareSerial bloot ( 2 , 3 );

char letter;
void setup() 
{
 
bloot.begin(9600);
Serial.begin(9600);

pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
}

void loop() 
{
 if(bloot.available())
 {
 letter=bloot.read();
  if(letter=='f')
  {
    analogWrite(9,255);
    analogWrite(10,255);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    
  }
  else if(letter=='s')
  {
    analogWrite(9,255);
    analogWrite(10,255);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
  }else if(letter=='b')
  {
    analogWrite(9,255);
    analogWrite(10,255);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
  }else if(letter=='r')
  {
    while(letter=='r')
    {
      right();
      letter=0;
    }
  }else if(letter=='l')
  {
    while(letter=='l')
    {
      left();
      letter=0;
    }
  }
 }

}
void right()
{
    analogWrite(9,75);
    analogWrite(10,75);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    delay(710);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
}

void left()
{
    analogWrite(9,75);
    analogWrite(10,75);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    delay(710);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    
}
