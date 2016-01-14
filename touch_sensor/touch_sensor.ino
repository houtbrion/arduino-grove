// Touch Sensor
// http://www.seeedstudio.com/wiki/index.php?title=Twig_-_Touch_Sensor

const int TouchPin=8; //9;
const int ledPin=3;
void setup() {
pinMode(TouchPin, INPUT);
pinMode(ledPin,OUTPUT);
} 
 
void loop() {
int sensorValue = digitalRead(TouchPin);
if(sensorValue==1)
{
digitalWrite(ledPin,HIGH);
}
else
{
digitalWrite(ledPin,LOW);
}
}
