// This Code is for to connect your Board to your Wifi and Hotspot.
#include <ESP8266WiFi.h> // Library

void setup()
{

    Serial.begin(9600);             // Intializing Serial Monitor
    WiFi.begin("iot", "123456789"); // Using this Command we set the WiFi id and Password.

    while (WiFi.status() != WL_CONNECTED) // This loop help us till the connection not get successfull.
    {
        Serial.print(".");
        delay(200);
    }

    Serial.print("");
    Serial.print("Connected ");
    // To ge the IP
    Serial.print(WiFi.localIP()); // To get the local Ip address.
}
