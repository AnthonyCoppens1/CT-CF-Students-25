const int lightsensor = A2;
const int led = 9;
int lightValue;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(lightsensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  lightValue = analogRead(lightsensor);
  lightValue = map(lightValue, 0, 1023, 1023, 0);

  int ledValue = map(lightValue, 1023, 0, 0, 255);
  
  if (lightValue > 900){
    analogWrite(led, LOW);
  }
  else{
    analogWrite(led, ledValue);
  }

  Serial.println(lightValue);
  delay(100);















}
