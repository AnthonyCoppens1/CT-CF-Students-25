long afstand;
long tijd;

#define trigger 10 //trigger die een signaal uitstuurt
#define echo 9 //echo die het signaal opvangt + zelfde als: const in echo = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);

  tijd = pulseIn(echo, HIGH);
  afstand = ((tijd / 2) / 29.4);

  Serial.print(afstand);
  Serial.println("cm");

  delay(200);

}
