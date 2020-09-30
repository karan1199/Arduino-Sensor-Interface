double c1;
double c2;
int o1 =4;
int o2 =5;
int o3 =6;
int o4 =7;
void setup ()
{
pinMode(2,INPUT);
pinMode(3,INPUT);
digitalWrite(o1,LOW);
digitalWrite(o2,LOW);
digitalWrite(o3,LOW);
digitalWrite(o4,LOW);

pinMode(o1,OUTPUT);
pinMode(o2,OUTPUT);
pinMode(o3,OUTPUT);
pinMode(o4,OUTPUT);

Serial.begin(9600);
}

void loop()
{
//c1[0] = pulseIn(2, HIGH);
c1 = pulseIn(2, HIGH);
c2 = pulseIn(3, HIGH);
Serial.print(c1);
Serial.print(" - ");
Serial.println(c2);
 
double hare = c1;

 if (hare > 1612) 
  {
    digitalWrite (4, HIGH);
  }
else {
    digitalWrite(4,LOW); 
}
double krishna = c1;
//Serial.println(krishna);
 if (krishna <= 1297  ) 
  {
    digitalWrite (5, HIGH);
  }
else {
    digitalWrite(5,LOW); 
  }
double harehare = c2;
//Serial.println(harehare);
 if (harehare > 1790) 
  {
    digitalWrite (6, HIGH);
  }
else {
    digitalWrite(6,LOW); 
  }
  
  double ram = c2;
Serial.println(ram);
 if (ram <= 1156  ) 
  {
    digitalWrite (7, HIGH);
  }
else {
    digitalWrite(7,LOW); 
  }

}
  


