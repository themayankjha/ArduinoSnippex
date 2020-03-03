String incoming;
const int battipin=13;
void setup() 
{
  pinMode(battipin,OUTPUT);
  digitalWrite(battipin,LOW);
  Serial.begin(9600);
  Serial.print("Kya Hukum Mere Aaka");

}

void loop() {
while (Serial.available()>0)
{
char recieved = (char)Serial.read();
incoming += recieved;
}
Serial.println(incoming);
if (incoming.equals("start")) 
{
Serial.print("Batti On Hui Gawa");
digitalWrite(battipin, HIGH);
delay(500);
incoming = "";
}
else if (incoming.equals("stop")) 
{
Serial.print("Batti Off Hui Gawa");
digitalWrite(battipin, LOW); 
delay(500);
incoming = "";
}
delay(500);
incoming = ""; // 
}
