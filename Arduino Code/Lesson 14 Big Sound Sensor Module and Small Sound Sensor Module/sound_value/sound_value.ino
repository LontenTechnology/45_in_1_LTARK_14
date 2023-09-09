void setup()
{
  Serial.begin(9600); // open serial port, set the baud rate at 9600 bps
}
void loop()
{
   int AOval,DOval;
   AOval=analogRead(0);   //connect mic sensor to Analog 0
   Serial.print("AO:");
   Serial.println(AOval,DEC);// print the sound value on serial monitor
   DOval=analogRead(3);
   Serial.print("DO:");
   Serial.println(DOval,DEC);         
   delay(100);
}

