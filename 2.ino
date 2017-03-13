const byte LED = 13;
void setup()
{
 Serial.begin(9600);
 Serial.print("\tLED pin is: ");
 Serial.print(LED);
 Serial.print("\n");
 pinMode(LED,OUTPUT);
 
}
void loop()
{
  int i;
  float Analogin = 0;
  float Vin = 0;
  for (i=0;i<=5;i++)
  {  
    Analogin = 0.7* Analogin + 0.3*analogRead(A0);
    Vin = Analogin * 5 / 1024;
    Serial.print(Vin);
    Serial.print("\n");
    delay(500);
  }
}
