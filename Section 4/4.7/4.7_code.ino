#include "DHT.h"54
#include<LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.init();
  lcd.clear();
  lcd.backlight();
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.init();

  Serial.println("DHT11 test!");
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();
  Serial.println("Temperature : ");
  Serial.println(temperature);
  Serial.println("Humidity : ");
  Serial.println(humidity);

  lcd.setCursor(0,0);
  lcd.print("Temperature : ");
  lcd.print(temperature);

  lcd.setCursor(0,1);
  lcd.print("Humidity : ");
  lcd.print(humidity);

}
