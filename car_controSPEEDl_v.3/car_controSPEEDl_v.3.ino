int x = 255;
// MAX SPEED = 255
// MIN SPEED = 50
void setup() 
{
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(9,OUTPUT);
 pinMode(10,OUTPUT);

}

void loop()
{
 analogWrite(9,x);
 analogWrite(10,x);
 digitalWrite(4,HIGH);
 digitalWrite(6,HIGH);

}
