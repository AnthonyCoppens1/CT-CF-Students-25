const int pot = A5;
int buzzer = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(pot, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int potValue = analogRead(pot);
  Serial.println(potValue);
  int buzValue = map(potValue, 0, 1023, 0, 15805);
  Serial.println(buzValue);
  tone(buzzer, buzValue);


}
