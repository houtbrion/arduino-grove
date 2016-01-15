#include <CircularLED.h>
CircularLED circularLED1(3,2);
//CircularLED circularLED1(10,9);
//CircularLED circularLED2(16,15);
//CircularLED circularLED;
unsigned int LED[24];
int k=0;
void setup() 
{
  Serial.begin(9600);
  //circularLED1.init();
}
void loop() 
{
  for (int i =0;i<24;i++)
  {
    LED[i]=0;
  }
    LED[k]= 0xff;
    k++;
    if (k==24)
    k=0;
    
  circularLED1.CircularLEDWrite(LED);
  //circularLED2.CircularLEDWrite(LED);
  delay(40);  
}
