#include <dht.h>
#define sensor A0
dht DHT;

void setup() {
  Serial.begin(9600);
  delay(500);
  Serial.println("Sensor Suhu dan Kelembaban Udara dengan DHT11\n\n");
  delay(1000);
}

void loop() {
  DHT.read11(sensor);
  Serial.print("Kelembaban Udara = ");
  Serial.print(DHT.humidity);
  Serial.print("% ");
  Serial.print("Suhu = ");
  Serial.print(DHT.temperature);
  Serial.println(" C ");
  delay(1000);
}
