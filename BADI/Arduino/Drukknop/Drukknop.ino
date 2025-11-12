const int LED = 7;
const int DRUK = 4;
int drukstand = 0; //constante waarde van de drukknop die meet 0 of 1

int schakelstand = 0; //check of licht aan of uit staat

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(DRUK, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  drukstand = digitalRead(DRUK);
  if (drukstand == 1 && schakelstand == 0){
    digitalWrite(LED, HIGH);
    schakelstand = 1;
  }
  else if (drukstand == 1 && schakelstand == 1){
    digitalWrite(LED, LOW);
    schakelstand = 0;
  }
  Serial.println(drukstand);
  delay(200);

  

}
