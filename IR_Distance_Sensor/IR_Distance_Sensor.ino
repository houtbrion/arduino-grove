/****************************************************************************/	
//	Function: To detect whether there is anyone in front of the sensor and 
//			  print the result on the serial monitor. 
//	Hardware: Grove - IR Distance Interrupter
//	Arduino IDE: Arduino-1.0
//	Author:	 FrankieChu		
//	Date: 	 Jan 22, 2013
//	Version: v1.0
//	by www.seeedstudio.com
//
//  This library is free software; you can redistribute it and/or
//  modify it under the terms of the GNU Lesser General Public
//  License as published by the Free Software Foundation; either
//  version 2.1 of the License, or (at your option) any later version.
//
//  This library is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//  Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public
//  License along with this library; if not, write to the Free Software
//  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
/******************************************************************************/

/*macro definition of the IR distance interrupt sensor*/
#define SENSOR_PIN 6

void setup()  
{
	Serial.begin(9600);
	pins_init();
}
void loop()  
{
	if(digitalRead(SENSOR_PIN)==LOW)  
	{
		Serial.println("Somebody is here.");
	}
	else  
	{
		Serial.println("Nobody.");
	}
	delay(500);
}

void pins_init()
{
	pinMode(SENSOR_PIN, INPUT); 
}

