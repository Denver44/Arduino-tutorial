int redPin = D0;
int greenPin = D1;
int time1 = 10;
int times2 = 5;
void setup()
{

    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
}

void loop()
{

    while (time1--)
    {
        digitalWrite(redPin, HIGH);
        delay(500);
        digitalWrite(redPin, LOW);
        delay(500);
    }
    while (times2--)
    {
        digitalWrite(greenPin, HIGH);
        delay(500);
        digitalWrite(greenPin, LOW);
        delay(500);
    }
}