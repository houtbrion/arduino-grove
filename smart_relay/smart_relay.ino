// Project Five - Relay Control
// http://www.seeedstudio.com/wiki/Grove_-_Relay
//

void setup()
{
  pinMode(2, INPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  if (digitalRead(2)==HIGH)
  {
    digitalWrite(6, HIGH);
    delay(100);
  }
  if (digitalRead(2)==LOW)
  {
    digitalWrite(6, LOW);
  }
}


