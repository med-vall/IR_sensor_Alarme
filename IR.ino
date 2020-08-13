
const int buzzer=12;     // pin 3 is the buzzer output
int isObstacle = HIGH;

void setup()
{
  pinMode(buzzer,OUTPUT);
  pinMode(13,OUTPUT);      //configure pin 4 as OUTPUT
  
}
void loop()
{
  isObstacle = digitalRead(A0);
  if (isObstacle == LOW)
  {
    Serial.println("OBSTACLE!!, OBSTACLE!!");
    digitalWrite(buzzer, HIGH);
    digitalWrite(13, HIGH);
  }
  else
  {
    Serial.println("clear");
    digitalWrite(buzzer, LOW);
  }
}
