
int Key = 3; //define key port
int val;//define digital variable val
void  setup()
{
  pinMode(LED_BUILTIN, OUTPUT); //define LED as a output port
  pinMode(Key, INPUT); //define key sensor as a output port
}
void  loop()
{ 
  val = digitalRead(Key); //read the value of the digital interface 3 assigned to val
  if (val == HIGH) //when the Key sensor have no pressed, LED on
  {
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else //when the Key sensor have pressed, LED off
  {
    digitalWrite(LED_BUILTIN, LOW);
  }
}

