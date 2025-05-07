#include "DHT.h"
//#define DHTPIN11 D2
//#define DHTTYPE11 DHT11
//DHT dht11(DHTPIN11, DHTTYPE11);

#define DHTPIN22 D4
#define DHTTYPE22 DHT22
DHT dht22(DHTPIN22, DHTTYPE22);

void setup() {
  Serial.begin(9600);
//  dht11.begin();
  dht22.begin();
}

void loop() {
//  float h1 = dht11.readHumidity();
//  float t1 = dht11.readTemperature();
  float h2 = dht22.readHumidity();
  float t2 = dht22.readTemperature();
//  Serial.print("Suhu 1: "); Serial.print(t1); Serial.print("°C");
//  Serial.print("\tRH 1: "); Serial.print(h1); Serial.println("%");
  Serial.print("Suhu 2: "); Serial.print(t2); Serial.print("°C");
  Serial.print("\tRH 2: "); Serial.print(h2); Serial.println("%"); Serial.println("");
  delay(2000);
}
