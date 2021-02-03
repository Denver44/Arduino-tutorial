// RGB LED HAS $ Leges
// Either One of them Has Common GND.
// Or Either it has Common Anode.
int redled = D0;
int greenled = D1;
int blueled = D2;

void setup()
{
    pinMode(redled, OUTPUT);
    pinMode(greenled, OUTPUT);
    pinMode(blueled, OUTPUT);
}

void loop()
{

    digitalWrite(redled, HIGH);
    delay(500);
    digitalWrite(redled, LOW);
    delay(500);
    digitalWrite(greenled, HIGH);
    delay(500);
    digitalWrite(greenled, LOW);
    delay(500);
    digitalWrite(blueled, HIGH);
    delay(500);
    digitalWrite(blueled, LOW);
    delay(500);
}