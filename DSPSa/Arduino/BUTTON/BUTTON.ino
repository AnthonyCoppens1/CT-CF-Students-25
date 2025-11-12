const int button = 4;
const int LED = 9;
int buttonState = 0;
int toggle = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(button);

  if (buttonState == 1 && toggle == 0){
    toggle = 1;
    digitalWrite(LED, HIGH);
  }
  else if (buttonState == 1 && toggle == 1)
  {
    toggle = 0;
    digitalWrite(LED, LOW);
  }
  delay(200);
}
