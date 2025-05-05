#include "DHTesp.h"
DHTesp dht;

void setup() {
    Serial.begin(9600);
    Serial.println("RH (%)\t\tSuhu (C)");
    dht.setup(14, DHTesp::DHT11); // GPIO14 (D5)
}
void loop() {
    //delay(dht.getMinimumSamplingPeriod() + 100);
    float rh = dht.getHumidity();
    float suhu = dht.getTemperature();
    Serial.print("RH (%): ");
    Serial.print(rh, 1);
    Serial.print("\t");
    Serial.print("Suhu (C): ");
    Serial.println(suhu, 1);
    delay(2000);
}
