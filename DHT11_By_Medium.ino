#include <DHT.h>
#include "DHT.h"
#define DHTPIN D7
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup(){
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  Serial.print(F("Humidity: "));
  Serial.print(h);
  Serial.print("\n");
  Serial.print(F("  Temperature: "));
  Serial.print(t);
  Serial.print(F("°C "));
  delay(1000);
}
