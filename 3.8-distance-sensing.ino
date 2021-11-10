#define trigPin 8
#define echoPin 7
#define led 2
#define led2 3

void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  if (distance < 30) {  // 
    digitalWrite(led,HIGH); 
  digitalWrite(led2,LOW);
  digitalWrite(4, LOW);
}
  else if (distance < 60) {
    digitalWrite(led,LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(4, LOW);
  }
  else {
    digitalWrite(4, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led2, LOW);
  }    Serial.print(distance);
    Serial.println(" cm");
   
    delay (500);
  }
  
