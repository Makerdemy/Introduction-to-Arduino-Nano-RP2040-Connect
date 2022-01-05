#include "DHT.h"

#define DHTPIN 2

#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(F("DHT11 test!"));
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();
  Serial.println("Temperature : ");
  Serial.println(temperature);
  Serial.println("Humidity : ");
  Serial.println(humidity);
}
