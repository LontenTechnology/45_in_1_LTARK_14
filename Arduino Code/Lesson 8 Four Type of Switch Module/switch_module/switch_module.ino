

int buttonpin=3; //define switch port
;int  val;//define digital variable val
void  setup()
{
  pinMode(LED_BUILTIN,OUTPUT);//define LED as a output port
  pinMode(buttonpin,INPUT);//define switch as a output port
}
void  loop()
{ 
  val=digitalRead(buttonpin);//read the value of the digital interface 3 assigned to val 
  if(val==HIGH)//when the switch sensor have signal, LED blink
  {
    digitalWrite(LED_BUILTIN,HIGH);
  }
  else
  {
     digitalWrite(LED_BUILTIN,LOW);
  }
}


