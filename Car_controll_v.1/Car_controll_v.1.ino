void setup() 
{
 pinMode(4,OUTPUT); // R forward
 pinMode(5,OUTPUT); // R backward
 
 pinMode(6,OUTPUT); // L forward
 pinMode(7,OUTPUT); // l backward
 
 pinMode(9 ,OUTPUT); // R PWM
 pinMode(10,OUTPUT); // L PWM
}

void loop() 
{
 forward();
 backward();

}

void forward()
{
   for(int i=0;i<=255;i++)
  {
  analogWrite(9,i);
  analogWrite(10,i);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  delay(20);
  }

   for(int u=255;u>=0;u--)
  {
  analogWrite(9,u);
  analogWrite(10,u);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  delay(20);
  }
}

void backward()
{
   for(int i=0;i<=255;i++)
  {
  analogWrite(9,i);
  analogWrite(10,i);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  delay(20);
  }

   for(int u=255;u>=0;u--)
  {
  analogWrite(9,u);
  analogWrite(10,u);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  delay(20);
  }
}
