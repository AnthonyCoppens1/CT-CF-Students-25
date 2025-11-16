#include "DHT.h"
#define DHTPIN 2 //same as --> const int DHTPIN = 2;
#define DHTTYPE DHT11

DHT sensor(DHTPIN, DHTTYPE);

void setup(){
  Serial.begin(9600);
  Serial.println("START");
  sensor.begin();
}

void loop(){
  float humidity = sensor.readHumidity();
  float temp = sensor.readTemperature();

  if (isnan(humidity) || isnan(temp)){
    Serial.println("Problem reading the module");
  }

  Serial.print("H: "); Serial.print(humidity); Serial.print("%");
  Serial.print("\tT: "); Serial.print(temp); Serial.println("°C");
  delay(500);





}
