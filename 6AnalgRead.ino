
int Ledpin = D0;        // we have to declare our led here
int bright = 500;       //(0 -1023) for ESP8266 and (0-255) For UNO
int analogReadPin = A0; // Thiis is our Analog Read Pin.
double v2 = 0;

void setup()
{
  pinMode(analogReadPin, INPUT); // As this time we taking the voltage and reading it out on Serial Monitor.
  Serial.begin(9600);            // To setup the serial Monitor we have to use command the baudrate is 9600.
  pinMode(Ledpin, OUTPUT);
}

void loop()
{
  analogWrite(Ledpin, bright);    //0
  v2 = analogRead(analogReadPin); // As we get the values from the analogRead so we have to save that value so that we can see that. it will return value between (0 -1023)
  // To get the Voltage2 in volts we have to ((5.0)/1023.0) * v2 we will ge the volatge .
  Serial.println(v2);
  delay(500); // it will read and print so fast we used this delay.
}