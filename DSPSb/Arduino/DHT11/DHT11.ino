#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT11
int buzzer = 8;

DHT dht(DHTPIN, DHTTYPE);

void setup(){
  Serial.begin(9600);
  Serial.println("DHTxx test!");
  dht.begin();
}

void loop(){
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  
  if (isnan(h) || isnan(t)){
    Serial.println("failed to read from DHT sensor!");
    return;
  }

  Serial.println("Humidity:");
  Serial.println(h);
  Serial.println("Temp:");
  Serial.println(t);
  if (h > 50){
    tone(buzzer, 8732);
  }
  else{
    noTone(buzzer);
  }

  delay(1000);





}