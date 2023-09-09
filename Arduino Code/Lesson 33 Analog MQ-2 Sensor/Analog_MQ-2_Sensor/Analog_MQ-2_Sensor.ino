int MQ2 = A0; // Define MQ2 gas sensor pin at A0
int val = 0; // declare variable
void setup ()
{
  Serial.begin (9600); // Set the serial port baud rate to 9600
  pinMode (MQ2, INPUT); // MQ2 gas sensor as input
}
void loop ()
{
  val = analogRead (MQ2); // Read the voltage value of A0 port and assign it to val
  Serial.println (val); // Serial port sends val value
  delay(1000);
}
