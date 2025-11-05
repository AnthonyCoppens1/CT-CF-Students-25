const int led = 12;
const int buttonOutput = 10;
int button = 0;
int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(buttonOutput, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  button = digitalRead(buttonOutput);
  if (buttonState == 0 && button == HIGH){
    digitalWrite(led, HIGH);
    buttonState = 1;
  }
  else if (buttonState == 1 && button == HIGH){
    digitalWrite(led, LOW);
    buttonState = 0;
  }
  Serial.println(button);
  delay(200);


}
