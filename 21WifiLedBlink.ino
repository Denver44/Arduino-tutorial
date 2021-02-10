#include <ESP8266WiFi.h>
WiFiClient client;
WiFiServer server(80);
#define LED D5

void setup()
{
    pinMode(LED, OUTPUT);
    Serial.begin(115200);
    WiFi.begin("iot", "123456789");
    while (WiFi.status() != WL_CONNECTED)
    {
        Serial.print(".");
        delay(200);
    }
    Serial.print("");
    Serial.print("Connected ");
    Serial.print(WiFi.localIP());
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
