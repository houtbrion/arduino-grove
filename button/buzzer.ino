// Project Four - Noise maker
// http://www.seeedstudio.com/wiki/Grove_-_Buzzer
//

void setup()
{
  pinMode(6, OUTPUT);
}

void loop()
{
  digitalWrite(6, HIGH);
  delay(analogRead(0));
  digitalWrite(6, LOW);
  delay(analogRead(0));
}
