

int adc_id = 0;
int soil_value=0;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
    soil_value = analogRead(adc_id); // get adc value
    if(soil_value>900)
    {
      Serial.println("I'm thirsty");
    }
    Serial.println(soil_value);
    delay(1000);
}
