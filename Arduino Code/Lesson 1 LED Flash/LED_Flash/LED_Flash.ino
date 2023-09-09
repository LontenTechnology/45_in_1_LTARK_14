int led = 12; 
void setup()
{
  pinMode(led, OUTPUT);     //Set Pin12 as output
}
void loop()
{    digitalWrite(led, HIGH);   //Turn on led
     delay(1000);
     digitalWrite(led, LOW);    //Turn off led
     delay(1000);
}
