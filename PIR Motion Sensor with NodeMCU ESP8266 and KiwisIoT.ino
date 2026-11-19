#include <KiwisIoT.h>

const char* ssid  = "YOUR_WIFI_NAME";
const char* pass  = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";

KiwisIoT kiwisiot(ssid, pass, topic);

#define PIR_PIN D5

void setup() {
  Serial.begin(9600);

  pinMode(PIR_PIN, INPUT);

  kiwisiot.begin();

  Serial.println("PIR Motion Monitoring Started");
}

void loop() {
  kiwisiot.run();

  int motionValue = digitalRead(PIR_PIN);

  Serial.print("Motion Status = ");

  if (motionValue == HIGH) {
    Serial.println("Motion Detected");
  } else {
    Serial.println("No Motion");
  }

  kiwisiot.send("1", motionValue);

  delay(500);
}