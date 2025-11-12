// C++ code
//
const int roodA = 13;
const int GeelA = 12;
const int groenA = 11;
const int RV = 6;
const int GV = 5;
const int druk = 2;
int schakelstand = 0;
int drukstand = 0;


void setup()
{
  pinMode(roodA, OUTPUT);
  pinMode(GeelA, OUTPUT);
  pinMode(groenA, OUTPUT);
  pinMode(RV, OUTPUT);
  pinMode(GV, OUTPUT);
  pinMode(druk, INPUT);

}

void loop()
{
  drukstand = digitalRead(druk);
  digitalWrite(GV, LOW);
  digitalWrite(roodA, LOW);
  digitalWrite(groenA, HIGH);
  digitalWrite(RV, HIGH);
  
  if (drukstand == 1 && schakelstand == 0){
    schakelstand = 1;
    digitalWrite(groenA, LOW);
    digitalWrite(GeelA, HIGH);
    delay(2000);
    digitalWrite(GeelA, LOW);
    digitalWrite(roodA, HIGH);
    digitalWrite(RV, LOW);
    digitalWrite(GV, HIGH);
    delay(5000); 
    schakelstand = 0;
  }
}