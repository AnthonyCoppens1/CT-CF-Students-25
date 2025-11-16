const int lichtsensor = A0;
const int led = 9;

// DEFINE IS ZELFDE ALS --> const int lichtsensor = A0;
int lichtwaarde;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(lichtsensor, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  lichtwaarde = analogRead(lichtsensor);
  int ledwaarde = map(lichtwaarde, 0, 1023, 0, 255);

  lichtwaarde = map(lichtwaarde, 0, 1023, 1023, 0);
  Serial.println(lichtwaarde);
  if (lichtwaarde > 700){
    analogWrite(led, 0);
  }
  else{
    analogWrite(led, ledwaarde);
  }

  delay(500);

}
