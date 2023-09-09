

int i = 0;    

void setup() {
  pinMode(9,OUTPUT);  
}

void loop() {
  for (i = 0; i <= 100; i += 1) 
  { 
    analogWrite(9,i);              
    delay(25);                       
  }
  for (i = 255; i >= 0; i -= 1) 
  { 
    analogWrite(9,i);             
    delay(25);                      
  }
}
