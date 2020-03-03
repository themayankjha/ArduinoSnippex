//An LED connected To Pin 13 turns on and off according to a serial command recieved, I am using a HC-05 Bluetooth Module for Serial Communication. 
String incoming; //declare incoming variable
const int battipin=13; //set pinmode for LED
void setup() 
{
  pinMode(battipin,OUTPUT); //set pin to output
  digitalWrite(battipin,LOW); //remove voltage from pin
  Serial.begin(9600); //set serial baud rate
  Serial.print("Kya Hukum Mere Aaka"); 

}

void loop() {
while (Serial.available()>0)
{
char recieved = (char)Serial.read();
incoming += recieved;
}
Serial.println(incoming);
if (incoming.equals("start"))                     //turn led on
{
Serial.print("Batti On Hui Gawa");
digitalWrite(battipin, HIGH);
delay(500);
incoming = "";
}
else if (incoming.equals("stop"))               //turn led off
{
Serial.print("Batti Off Hui Gawa");
digitalWrite(battipin, LOW); 
delay(500);
incoming = "";
}
delay(500);
incoming = ""; // 
}
