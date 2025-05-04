#include "DHTesp.h"
DHTesp dht;

void setup() {
    Serial.begin(9600);
    Serial.println();
    Serial.println("Status\t\tRH (%)\t\tSuhu (C)");
    dht.setup(14, DHTesp::DHT11); // GPIO14 (D5)
}
void loop() {
    //delay(dht.getMinimumSamplingPeriod() + 100);
    delay(2000);
    float humidity = dht.getHumidity();
    float temperature = dht.getTemperature();
    Serial.print("Status: "); Serial.print(dht.getStatusString());
    Serial.print("\t");
    Serial.print("Humidity (%): "); Serial.print(humidity, 1);
    Serial.print("\t");
    Serial.print("Temperature (C): "); Serial.print(temperature, 1);
    Serial.print("\t");
    Serial.println();
}
