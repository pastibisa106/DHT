/*
 DHT11 PIN :
 1 = VCC
 2 = DATA ke A5
 3 = NC (tidak dipakai)
 4 = GROUND
*/

#include <dht11.h> //Library DHT11
#define DHT11PIN A5 //pin data di A5
dht11 DHT11;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int chk = DHT11.read(DHT11PIN);
  Serial.print("Suhu: ");
  Serial.print((float)DHT11.temperature, 2);
  Serial.print(" C");
  Serial.print(" || ");
  Serial.print("RH: ");
  Serial.print((float)DHT11.humidity, 2);
  Serial.println(" %");
  delay(1000);
}
