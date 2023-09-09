

int  sensorPin  =  A0;     // select the input  pin for  the potentiometer 
int  ledPin  =  13;   // select the pin for  the LED
int  sensorValue =  0;  // variable to  store  the value  coming  from  the sensor

void setup()
{
  pinMode(sensorPin,INPUT);
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  sensorValue =  analogRead(sensorPin);
  digitalWrite(ledPin,  HIGH); 
  delay(1000); 
  digitalWrite(ledPin,  LOW);
  delay(1000);
  Serial.println(sensorValue,  DEC);
}

