void setup()
{
  pinMode(1, OUTPUT);
  pinMode(5, INPUT);
  pinMode(7, INPUT);
}

void loop()
{
  
if (digitalRead(5)==HIGH)
  {
    digitalWrite(1, HIGH);
    delay(100);
    digitalWrite(1, LOW);
  }
  
  if (digitalRead(7)==HIGH)
  {
    digitalWrite(1, HIGH);
    delay(200);
    digitalWrite(1, LOW);
  } 

}
