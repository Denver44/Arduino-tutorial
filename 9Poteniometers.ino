int analogReadPin = A0;
double v2 = 0;
double readVal;
void setup()
{
    pinMode(analogReadPin, INPUT);
    Serial.begin(9600);
}

void loop()
{
    readVal = analogRead(analogReadPin);
    v2 = ((5.0) / 1023.0) * readVal;
    Serial.println(v2);
    delay(500);
}

// The Poteniometer is a variable resisitor we can vary the resistance from 0 to upto the range of the range of that potentiometers.
// The Poteniometer is more useful the simple rsistor if we diffrent resistance value we can just vary them but in case of simple of resisitir we have to chnage and add a new value resisitor.
// The Poteinoimeter has three Legs
// 1. Volatge
// 2. Ground
// 3. Vout
// Internally it has two resisitoir connecxted in series and in middle a wiper which go from left to right as we move the upper value right or left to vary the resistor value.

// Here we are reading the value of tjhe volatge by the analoag pin using Arduino.
