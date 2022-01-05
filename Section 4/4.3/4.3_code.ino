int vib = 8;
int LED = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(vib, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(vib) == LOW)
  {
    digitalWrite(LED, HIGH);
    delay(4000);
  }
  else
  {
    digitalWrite(LED, LOW);
  }
}
