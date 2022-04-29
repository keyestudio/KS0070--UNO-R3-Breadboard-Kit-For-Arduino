int pin = 7;  //attach to the third pin of NE555
unsigned long duration;  //the variable to store the length of the pulse 
 
void setup()
{
  Serial.begin(9600); //Set serial baud rate to 9600 bps
}
void loop()
{
int val;
val=analogRead(0);//Read rotation sensor value from analog 0
Serial.println(val,DEC);//Print the value to serial port
delay(100);
}
