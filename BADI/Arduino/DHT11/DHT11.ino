#include "DHT.h"

#define DHTPIN 2
#define DHTTYPE DHT11
#define buzzer 4

DHT sensor(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("START!");

  sensor.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  float vochtigheid = sensor.readHumidity();
  float temperatuur = sensor.readTemperature();

  if (isnan(vochtigheid) || isnan(temperatuur)){
    Serial.println("Er zit misschien een kabel los!");
  }

  if (vochtigheid >= 90){
    tone(buzzer, 14080);
  }
  else{
    noTone(buzzer);
  }

  Serial.print("Vochtigheid: ");
  Serial.print(vochtigheid);
  Serial.print("%");
  Serial.print("\t");
  Serial.print("Temperatuur: ");
  Serial.print(temperatuur);
  Serial.println("°C");

  delay(2000);





}
