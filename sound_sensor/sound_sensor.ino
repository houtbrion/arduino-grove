// Function: If the sound sensor senses a sound that is up to the threshold you set in the code, the LED is on for 200ms.
// Hardware: Grove - Sound Sensor, Grove - LED
// http://www.seeedstudio.com/wiki/index.php?title=Twig_-_Sound_Sensor

/*macro definitions of the sound sensor and the LED*/
#define SOUND_SENSOR A0
#define LED 3      // the number of the LED pin

#define THRESHOLD_VALUE 400//The threshold to turn the led on 400.00*5/1024 = 1.95v
void setup() 
{
    Serial.begin(9600);
    pins_init();
}
 
void loop() 
{
	int sensorValue = analogRead(SOUND_SENSOR);//use A0 to read the electrical signal
	Serial.print("sensorValue ");
        Serial.println(sensorValue);
        if(sensorValue > THRESHOLD_VALUE)
	{
		turnOnLED();//if the value read from A0 is larger than 400,then light the LED
		delay(200);
	}
	turnOffLED();
}

void pins_init()
{
	pinMode(LED, OUTPUT);
	pinMode(SOUND_SENSOR, INPUT); 
}
void turnOnLED()
{
	digitalWrite(LED,HIGH);
}
void turnOffLED()
{
	digitalWrite(LED,LOW);
}
