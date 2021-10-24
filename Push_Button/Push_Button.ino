int pushed = 0;
int count = 0;

int pinOut = 11;
int pinIn = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinOut, OUTPUT);
  pinMode(pinIn, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  pushed = digitalRead(pinIn);
  if(pushed == HIGH) {
    digitalWrite(pinOut, HIGH);
    delay(500);
    count++;
    Serial.println(count);
    
  }
  else{
   digitalWrite(pinOut, LOW);
   
  }
}
