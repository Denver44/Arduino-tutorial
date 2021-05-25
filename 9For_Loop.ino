int redPin = D0;
int greenPin = D1;
void setup()
{

    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
}

void loop()
{

    for (int i = 0; i < 5; i++)
    {
        digitalWrite(redPin, HIGH);
        delay(500);
        digitalWrite(redPin, LOW);
        delay(500);
    }
    for (int i = 0; i < 3; i++)
    {
        digitalWrite(greenPin, HIGH);
        delay(500);
        digitalWrite(greenPin, LOW);
        delay(500);
    }
}