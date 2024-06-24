// Note: we did not need resistors for this project, just cables and led's
int red = 9;
int yellow = 8;
int green = 7;

void setup(){
  
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green,  OUTPUT);
  
}
void loop(){
digitalWrite(red, HIGH);
 delay(8000);
digitalWrite(red,  LOW);

digitalWrite(green, HIGH);
delay(6000);
digitalWrite(green,  LOW);

digitalWrite(yellow, HIGH);
delay(2000);
  digitalWrite(yellow,  LOW);

}