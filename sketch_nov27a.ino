#define sensor 5
#define led 6

void setup () {

  pinMode(led,OUTPUT);
  pinMode(sensor,INPUT);

}

void loop () {

  if (digitalRead(sensor) == HIGH) {

    digitalWrite(led,HIGH);

  }

  else if (digitalRead(sensor) == LOW) {

    digitalWrite(led,LOW);

  }

  delay(100);
  
}