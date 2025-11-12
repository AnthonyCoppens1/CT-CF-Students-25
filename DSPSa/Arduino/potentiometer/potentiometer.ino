const int pot = A3;
const int led = 6; //always use a pin with a ~ 
int potValue;
int lightValue;

void setup() {
  // put your setup code here, to run once:
  pinMode(pot, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potValue = analogRead(pot);
  lightValue = map(potValue, 0, 1023, 0, 255);

  analogWrite(led, lightValue);

  Serial.println(potValue);
  delay(100);




}
