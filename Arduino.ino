int resval = 0;  // holds the value
int respin = A5; // sensor pin used
int Relay = 13;   
void setup() { 
  pinMode(13,OUTPUT); //Set pin 13 as OUTPUT pin, to send signal to relay
  // start the serial console
  Serial.begin(9600);
} 
  
void loop() { 
   
  resval = analogRead(respin); //Read data from analog pin and store it to resval variable
   
  if (resval<=500){ Serial.println("Water Level: Empty");
  digitalWrite(13,LOW);
  }
  else
  {
  digitalWrite(13,HIGH);
  delay(3000); 
  }
}
