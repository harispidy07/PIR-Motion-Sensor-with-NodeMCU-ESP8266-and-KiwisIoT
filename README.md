# PIR Motion Sensor with NodeMCU ESP8266 and KiwisIoT

## Project Overview

This project detects human movement using a PIR motion sensor connected to an ESP8266 NodeMCU. It sends motion detection information to the KiwisIoT platform, enabling real-time remote monitoring for smart security and automation applications.

## Hardware Components

- ESP8266 NodeMCU
- PIR Motion Sensor (HC-SR501)
- Jumper Wires
- Breadboard
- USB Cable
- Power Supply

## Software Requirements

- Arduino IDE
- ESP8266 Board Package
- KiwisIoT Arduino Library

## Circuit Connections

| PIR Sensor | ESP8266 NodeMCU |
| ---------- | --------------- |
| VCC        | VIN (5V)        |
| GND        | GND             |
| OUT        | D5              |

## Working Principle

The PIR sensor detects changes in infrared radiation caused by moving objects, such as humans. When motion is detected, it sends a HIGH signal to the ESP8266. The controller processes the signal and updates the motion status on the KiwisIoT platform for remote monitoring.

## KiwisIoT Dashboard

| Data             | Description                 |
| ---------------- | --------------------------- |
| Motion Detection | Motion detected / No motion |
| Sensor Status    | HIGH / LOW                  |
| Monitoring       | Real-time motion updates    |

## Configuration

Update your Wi-Fi credentials and KiwisIoT Topic ID in the Arduino code:

```cpp
const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";
```

Upload the code to the NodeMCU ESP8266 and monitor motion detection through the KiwisIoT dashboard.

## Applications

- Smart security systems
- Human movement detection
- Home automation
- Intruder detection
- Automatic lighting systems
- Office and room monitoring

## Project Reference

**Hackster.io Project:**  
[https://www.hackster.io/harispidy07/pir-motion-sensor-with-nodemcu-esp8266-and-kiwisiot-7f71b9](https://www.hackster.io/harispidy07/pir-motion-sensor-with-nodemcu-esp8266-and-kiwisiot-7f71b9)

**KiwisIoT Platform:**  
[https://kiwisiot.com/](https://kiwisiot.com/)

**KiwisIoT GitHub Repository:**  
[https://github.com/Kiwistron/KiwisIoT-Projects](https://github.com/Kiwistron/KiwisIoT-Projects)

## Author

**Hariprasath S**

GitHub: [https://github.com/harispidy07](https://github.com/harispidy07)

---

_Built using ESP8266, PIR Motion Sensor, and KiwisIoT for real-time human movement detection._
