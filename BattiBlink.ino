//An LED connected To Pin 13 blinks every half a second.  

const int battipin=13; // Set Connected Pin
void setup()
{
  pinMode(battipin,OUTPUT); //Set Pin to Output
}

void loop()
{
  digitalWrite(battipin,HIGH); //Give Voltage to Pin
  delay(500);                  // half a second of delay
  digitalWrite(battipin,LOW);  //Remove Voltage from Pin
  delay(500);                  //half a second of delay
}
