String readString;
void setup()
{
  Serial.begin(9600);
  pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
}
void loop()
{
  while(Serial.available())
  {
    delay(3);
    char c = Serial.read();
    readString += c;
  }
  if(readString.length() >0)
  {
    Serial.println(readString);
    if(readString == "*switch on light#")
   {
    digitalWrite(12,HIGH);
  }
   if(readString == "*switch off light#")
   {
    digitalWrite(12,LOW);
  }
     if(readString == "*switch on fan#")
   {
    digitalWrite(11,HIGH);
  }
   if(readString == "*switch off fan#")
   {
    digitalWrite(11,LOW);
  }
     if(readString == "*switch on bulb#")
   {
    digitalWrite(10,HIGH);
  }
   if(readString == "*switch off bulb#")
   {
    digitalWrite(10,LOW);
  }
  
  readString="";
  }
}
