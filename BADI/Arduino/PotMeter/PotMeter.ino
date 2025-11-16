const int POT = A2;
const int led = 3;
int potWaarde = 0;
int lichtwaarde = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(POT, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potWaarde = analogRead(POT);
  lichtwaarde = map(potWaarde, 0, 1023, 0, 255);

  analogWrite(led, lichtwaarde);
  Serial.println(potWaarde);









}
