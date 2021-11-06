// This Code is for to connect your Board to your Hotspot.
#include <ESP8266WiFi.h> // Library must need when we have to use internet and Wifi

void setup()
{

    Serial.begin(9600);                   // Intializing Serial Monitor
    WiFi.begin("iot", "123456789");       // Using this Command we set the WiFi id and Password and our nodemcu get connect to this particluar wifi.
    while (WiFi.status() != WL_CONNECTED) // This loop help us till the connection not get successfull.
    {
        Serial.print(".");
        delay(200);
    }

    Serial.print("");
    Serial.print("Connected ");
    Serial.print(WiFi.localIP()); // To get the local Ip address.
    // To ge the IP
}

// WiFi.status()
// values:
// To check if it is connected to a network or not.
// 1) WL_CONNECTED
// 2) WL_IDLE_STATUS
// 3) WL_CONNECT_FAILED

void loop()
{
}