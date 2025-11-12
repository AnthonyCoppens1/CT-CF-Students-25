const int LED = 9;
const int lightsensor = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(lightsensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int light = analogRead(lightsensor);
  light = map(light, 0, 1023, 1023, 0);

  //turning on a light if too dark!
  /*if (light < 100){
    digitalWrite(LED, HIGH);
  }
  else{
    digitalWrite(LED, LOW);
  }*/

  //dimming light depending on value of measured light
  light = map(light, 1023, 0, 255, 0);
  Serial.println(light);
  if (light >= 230){
    analogWrite(LED, LOW);
  }
  else{
    analogWrite(LED, light);
  }
  delay(200);

}
