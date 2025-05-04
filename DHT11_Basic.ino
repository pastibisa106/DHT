#include <dht.h>
#define DHT11_PIN 7
dht DHT;

void setup(){
  Serial.begin(9600);
}

void loop() {
  int chk = DHT.read11(DHT11_PIN);
  Serial.print("Suhu = "); Serial.println(DHT.temperature);
  Serial.print("RH   = "); Serial.println(DHT.humidity);
  delay(1000);
}
