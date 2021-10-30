int APin = 0;
float celsius;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  float rawVoltage = analogRead(APin);
  float millivolts = (rawVoltage/1024)*5000;
  celsius = millivolts/10;
  
  Serial.println(celsius);
  Serial.print("Degree Celsius \n");
  Serial.print((celsius*9)/5 +32);
  Serial.print("degree Farenheit\n");
  delay(3000);
}
