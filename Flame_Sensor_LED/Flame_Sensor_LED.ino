const int ledpin = 8;
const int sensorpin = A5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
  pinMode(sensorpin, INPUT);
}

void loop() {

  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(sensorpin);
  Serial.println(sensorValue);

  // above 300 in this room is danger! :)
  if (sensorValue > 300)
  {
    Serial.println("Danger! Fire detected!");
    digitalWrite(ledpin, HIGH);
    delay(1000);
  }
  else
  {
    digitalWrite(ledpin, LOW);
  }
}
