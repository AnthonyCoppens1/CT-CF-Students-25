const int buzzer = 8;
const int pot = A2;
int potValue;

void setup() {
  // put your setup code here, to run once:
  pinMode(pot, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*for (int i = 0; i < 15805; i++){
    tone(buzzer, i);
    delay(50);
  }*/
  potValue = analogRead(pot);

  int newValue = map(potValue, 0, 1023, 0, 15804);

  tone(buzzer, newValue);
  delay(100);
  noTone(buzzer);
  delay(100);
  tone(buzzer, 1800);
  delay(100);
  noTone(buzzer);
  delay(100);
  tone(buzzer, newValue);
  delay(100);
  noTone(buzzer);
  delay(100);
  tone(buzzer, 2800);
  delay(100);
  noTone(buzzer);
  delay(100);


}
