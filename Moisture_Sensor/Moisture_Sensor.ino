int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 2;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
   Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);    
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);    
  delay(1000);          
  Serial.print("sensor = " );                       
  Serial.println(sensorValue);                   
}
