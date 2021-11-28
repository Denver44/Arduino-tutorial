int AnalogReadPin = A0;
int LedPin = D0;
int AnalogValue;  // This value will be between (0-1023) by Potentiometer
float LedVolatge; // This Volatge will be apply to led to make it dimmable.

void setup()
{
    pinMode(AnalogReadPin, INPUT);
    pinMode(LedPin, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    AnalogValue = analogRead(AnalogReadPin);
    LedVolatge = (255.0 / 1023.0) * AnalogValue;
    analogWrite(LedPin, LedVolatge);
    Serial.println(LedVolatge); // Printing the value Led Volatge.
}