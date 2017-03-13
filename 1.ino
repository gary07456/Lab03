const byte LED = 13;
void setup()
{
  Serial.begin(9600);
  Serial.print("Hello\n"); 
 Serial.print("World.");
 Serial.print("\tLED pin is: ");
 Serial.print(LED);
 pinMode(LED,OUTPUT); 

}
void loop()
{
  if(Serial.available() )
  {
    char val=Serial.read();
  switch(val)
  {
  case '1':  
  {
    digitalWrite(LED,HIGH);
    Serial.print("LED ON\n");  
    break;
  }
  case '0':
  {
     digitalWrite(LED,LOW); 
     Serial.print("LED OFF\n"); 
     break;
  }
  }
  }
}
