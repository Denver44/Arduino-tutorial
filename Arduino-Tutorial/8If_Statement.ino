int analogReadPin = A0;
int redPin = D6;
double v2 = 0;
double readVal;
void setup()
{
    pinMode(analogReadPin, INPUT);
    pinMode(redPin, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    analogWrite(Ledpin, bright);
    readVal = analogRead(analogReadPin);
    v2 = ((5.0) / 1023.0) * readVal;
    if (v2 > 4.0)
    {
        digitalWrite(redPin, HIGH);
    }
    else
    {
        digitalWrite(redPin, LOW);
    }

    Serial.println(v2);
    delay(500);
}


// ------------
int bluePin = D0;
int greenPin = D1;

String mood = "DURGESH";

void setup()
{
    pinMode(bluePin, OUTPUT);
    pinMode(greenPin, OUTPUT);
}

void loop()
{
    if (mood == "DURGEH")
    {
        digitalWrite(greenPin, HIGH);
        digitalWrite(bluePin, LOW);
    }
    else
    {
        digitalWrite(greenPin, LOW);
        digitalWrite(bluePin, HIGH);
    }
    delay(500);
}
