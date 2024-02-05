#include <WiFi.h>

const char* ssid = "Bismillah"; // SSID Name
const char* password = "lindungikamiyallah"; // SSID Password

void setup() {

  Serial.begin(115200);
  delay(10);

  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while(WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.print("Connected with IP Address: ");
  Serial.println(WiFi.localIP());

}

void loop() {

}
