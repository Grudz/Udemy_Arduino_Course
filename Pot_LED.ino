void setup() {
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int potValue = analogRead(A0);
  int mappedValue = map(potValue, 0,1023, 0, 255);
  analogWrite(6, mappedValue);
//0 to 1203 analog read
//0 to 255 
  
}
