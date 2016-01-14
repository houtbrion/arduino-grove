/*
/* Grove - Light Sensor demo v1.0
* 
* A0にヒカリセンサを接続．
*
* By: http://www.seeedstudio.com
http://www.seeedstudio.com/wiki/Grove_-_Light_Sensor#With_Arduino
*/
#include <math.h>
const int ledPin=13;                 //Connect the LED Grove module to Pin13, 基板上のLEDを使うように変更
const int thresholdvalue=10;         //The threshold for which the LED should turn on. 
float Rsensor; //Resistance of sensor in K
void setup() {
  Serial.begin(9600);                //Start the Serial connection
  pinMode(ledPin,OUTPUT);            //Set the LED on Digital 12 as an OUTPUT
}
void loop() {
  int sensorValue = analogRead(0); 
  Rsensor=(float)(1023-sensorValue)*10/sensorValue;
  if(Rsensor>thresholdvalue)
  {
    digitalWrite(ledPin,HIGH);
  }
  else
  {
  digitalWrite(ledPin,LOW);
  }
  Serial.println("the analog read data is ");
  Serial.println(sensorValue);
  Serial.println("the sensor resistance is ");
  Serial.println(Rsensor,DEC);//show the light intensity on the serial monitor;
  delay(1000);
}
