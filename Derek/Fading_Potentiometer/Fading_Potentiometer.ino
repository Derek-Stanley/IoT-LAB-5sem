int analogIn= A0;
int analogOut = 11;

int sensorValue = 0;
int outputValue = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(analogIn);
  outputValue = map(sensorValue,0,1023,0,255);
  analogWrite(analogOut,outputValue);
  Serial.println(sensorValue);
  Serial.println(outputValue);
  delay(2);

}
