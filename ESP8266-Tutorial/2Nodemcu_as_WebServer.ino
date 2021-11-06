// This Code is for to connect your Board to your Wifi and Hotspot.
#include <ESP8266WiFi.h> // Library must need when we have to use internet and Wifi

WiFiClient client; // To use Client side we have to declare WiFi Client and WiFiServer and in this we have to pass port number.
WiFiServer server(80);

void setup()
{

    Serial.begin(115200);                 // Intializing Serial Monitor
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
    server.begin(); // By this Command we start the server
}

void loop()
{
    client = server.available(); // If we make a request to sever it return 1.
    if (client == 1)
    {
        String request = client.readStringUntil('\n');
        Serial.println(request);
    }
    else
    {
        Serial.println("NO Client");
        delay(10000);
    }
}