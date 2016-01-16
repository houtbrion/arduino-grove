/*
 * MagnetControlLED.ino
 * Example sketch for magnetic switch
 *
 * Copyright (c) 2012 seeed technology inc.
 * Website    : www.seeed.cc
 * Author     : FrankieChu
 * Create Time: Jan 16,2013
 * Change Log :
 *
 * The MIT License (MIT)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
 
 
/*****************************************************************************/
//	Function:	 If the magnetic switch is near the magnet, the on board LED 
//			 of the Arduino or Seeeduino will be turned on, otherwise the 
//			 LED will be turned off.
//	Arduino IDE: Arduino-1.0
/*******************************************************************************/

/*macro definitions of magnetic pin and LED pin*/
#define MAGNECTIC_SWITCH 9
#define LED	13//the on board LED of the Arduino or Seeeduino

void setup()
{
 	pinsInit();
}
 
void loop() 
{
	if(isNearMagnet())//if the magnetic switch is near the magnet?
	{
		turnOnLED();
	}
	else
	{
		turnOffLED();
	}
}
void pinsInit()
{
	pinMode(MAGNECTIC_SWITCH, INPUT);
	pinMode(LED,OUTPUT);
}

/*If the magnetic switch is near the magnet, it will return ture, */
/*otherwise it will return false								*/
boolean isNearMagnet()
{
	int sensorValue = digitalRead(MAGNECTIC_SWITCH);
	if(sensorValue == HIGH)//if the sensor value is HIGH?
	{
		return true;//yes,return ture
	}
	else
	{
		return false;//no,return false
	}
}
void turnOnLED()
{
	digitalWrite(LED,HIGH);
}
void turnOffLED()
{
	digitalWrite(LED,LOW);
}
