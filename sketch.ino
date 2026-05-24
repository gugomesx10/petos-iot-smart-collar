#include "DHTesp.h"

const int DHT_PIN = 15;
const int PIR_PIN = 13;
const int LED_GREEN = 26;
const int LED_RED = 27;
const int BUZZER = 25;

DHTesp dhtSensor;

void setup() {
  Serial.begin(115200);

  dhtSensor.setup(DHT_PIN, DHTesp::DHT22);

  pinMode(PIR_PIN, INPUT);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  TempAndHumidity data = dhtSensor.getTempAndHumidity();

  float temperature = data.temperature;
  float humidity = data.humidity;
  int movement = digitalRead(PIR_PIN);

  bool tempAlert = temperature > 35;
  bool humidityAlert = humidity < 30 || humidity > 75;
  bool inactivityAlert = movement == LOW;

  bool criticalAlert = tempAlert || humidityAlert || inactivityAlert;

  Serial.println("==================================");
  Serial.println("       PetOS Smart Collar");
  Serial.println("==================================");

  Serial.print("Temperatura: ");
  Serial.print(temperature);
  Serial.println(" °C");

  Serial.print("Umidade: ");
  Serial.print(humidity);
  Serial.println(" %");

  Serial.print("Movimento: ");
  Serial.println(movement == HIGH ? "Detectado" : "Sem movimento");

  Serial.println("----------------------------------");

  if (tempAlert) {
    Serial.println("ALERTA: Temperatura elevada.");
  }

  if (humidityAlert) {
    Serial.println("ALERTA: Umidade fora do ideal.");
  }

  if (inactivityAlert) {
    Serial.println("ALERTA: Possível inatividade prolongada.");
  }

  if (!criticalAlert) {
    Serial.println("Status geral: Pet em condição normal.");
    digitalWrite(LED_GREEN, HIGH);
    digitalWrite(LED_RED, LOW);
    noTone(BUZZER);
  } else {
    Serial.println("Status geral: Atenção necessária.");
    digitalWrite(LED_GREEN, LOW);
    digitalWrite(LED_RED, HIGH);
    tone(BUZZER, 1000);
    delay(300);
    noTone(BUZZER);
  }

  Serial.println("==================================");
  Serial.println();

  delay(2000);
}