//#define heaterSelPin 15
#define heaterSelPin A1
#define dataPin A0
 
void setup() {
  Serial.begin(9600);
  Serial.println("Heater Start");
  pinMode(heaterSelPin,OUTPUT);   // set the heaterSelPin as digital output.
  digitalWrite(heaterSelPin,LOW); // Start to heat the sensor
  //digitalWrite(heaterSelPin,HIGH); // Start to heat the sensor
  Serial.println("Heater ready");
}
 
void loop() {
  float sensor_volt; 
  float RS_air; //  Get the value of RS via in a clear air
  float sensorValue;
 
/*--- Get a average data by testing 100 times ---*/   
    for(int x = 0 ; x < 100 ; x++)
  {
    sensorValue = sensorValue + analogRead(dataPin);
  }
  sensorValue = sensorValue/100.0;
/*-----------------------------------------------*/
 
  sensor_volt = sensorValue/1024*5.0;
  RS_air = sensor_volt/(5.0-sensor_volt); // omit *R16
  Serial.print("sensor_volt = ");
  Serial.print(sensor_volt);
  Serial.println("V");
  Serial.print("RS_air = ");
  Serial.println(RS_air);
  delay(1000);
 
}
