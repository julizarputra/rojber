#include <ESP8266WiFi.h>

const char* ssid = "WiFiName";
const char* password = "WiFiPassword";

WiFiServer server(80);

void setup() {
  pinMode(14, OUTPUT);
  digitalWrite(14, 0);
 
WiFi.begin(ssid, password);
server.begin();
}

void loop() {

  
}
