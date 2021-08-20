#include <dht.h>


dht sensorDHT11;

void setup() {
  Serial.begin(9600);
  delay(2000);
}

void loop() {
  sensorDHT11.read11(pinoDHT11);
  Serial.print("Unidade: ");
  Serial.println(sensorDHT11.humidity);
  Serial.print("Temperatura: ");
  Serial.println(sensorDHT11.temperature);
  delay(2000);
}
