#include <ESP8266WiFi.h>
WiFiClient client;
WiFiServer server(80);
#define LED D5
// It Default Ip address is 192.168.4.1
void setup()
{
    pinMode(LED, OUTPUT);
    Serial.begin(115200);
    WiFi.softAP("ESP8266", "123456");
    Serial.println("");
    Serial.println("Nodemcu Started ");
    Serial.print(WiFi.softAPIP());
    server.begin();
}

void loop()
{
    client = server.available();
    if (client == 1)
    {
        String request = client.readStringUntil('\n');
        Serial.println(request);
        request.trim();
        if (request == "GET /ledon HTTP/1.1")
        {
            digitalWrite(LED, HIGH);
        }
        if (request == "GET /ledoff HTTP/1.1")
        {
            digitalWrite(LED, LOW);
        }
    }
}
