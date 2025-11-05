const int pot = A1;
const int LED = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int potValue = analogRead(pot);
  int ledValue = map(potValue, 0, 1023, 0, 255);
  analogWrite(LED, ledValue);
  Serial.println(potValue);

}
