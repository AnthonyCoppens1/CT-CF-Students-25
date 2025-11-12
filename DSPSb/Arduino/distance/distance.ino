long distance;
long duration;
#define trigPin 10 //signal --> same as:  int trigPin = 10;
#define echoPin 9 //receiver of the signal

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = ((duration/2) / 29.4);
  Serial.print(distance);
  Serial.println(" cm");
  delay(500);





}
