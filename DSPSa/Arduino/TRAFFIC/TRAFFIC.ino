const int redCar = 2;
const int yellowCar = 4;
const int greenCar = 6;
const int redPed = 8;
const int greenPed = 10;
const int button = 12;
int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(redCar, OUTPUT);
  pinMode(yellowCar, OUTPUT);
  pinMode(greenCar, OUTPUT);
  pinMode(redPed, OUTPUT);
  pinMode(greenPed, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(button);
  digitalWrite(greenCar, HIGH);
  digitalWrite(redPed, HIGH);

  if (buttonState == 1){
    delay(500);
    digitalWrite(greenCar, LOW);
    digitalWrite(yellowCar, HIGH);
    delay(1000);
    digitalWrite(yellowCar, LOW);
    digitalWrite(redCar, HIGH);
    digitalWrite(greenPed, HIGH);
    digitalWrite(redPed, LOW);
    delay(1000);
    digitalWrite(greenPed, LOW);
    digitalWrite(redCar, LOW);
  }






}
