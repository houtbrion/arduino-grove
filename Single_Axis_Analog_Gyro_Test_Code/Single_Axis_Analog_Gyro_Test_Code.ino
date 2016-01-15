 #include <Math.h>
 int sensorPin = A0;    // select the input pin for the sensor
 
 float reference_Value = 0; 
 
 int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  
    int i;
    float sum=0.0;
    pinMode(sensorPin, INPUT);
    Serial.begin(9600);
    Serial.println("Please do not rotate it before calibrate!");
    Serial.println("Get the reference value:");
    delay(1000);
    for(i=0;i<1000;i++)
    {
      // read the value from the sensor:
    sensorValue = analogRead(sensorPin);
    sum += sensorValue;
    delay(2);
    } 
  Serial.print("The reference value is:");
  Serial.println(sum/1000);
  reference_Value=sum/1000;
 } 

void loop() {
  
    double angularVelocity;
    sensorValue = analogRead(sensorPin);
    angularVelocity =((double)(sensorValue-reference_Value)*4950.0)/1023.0/0.67;
    Serial.print(angularVelocity);
    Serial.println("deg/s");
    delay(500);        // delay in between reads for stability
}

