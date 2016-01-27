void setup(){
  pinMode(2, OUTPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
}

void loop(){
  if (digitalRead(6)==HIGH){
    digitalWrite(2, HIGH);
    delay(1000);
    digitalWrite(2, LOW);
  }
  if (digitalRead(7)==HIGH){
    digitalWrite(2, HIGH);
    delay(2000);
    digitalWrite(2, LOW);
  } 
}
