int redPin = D0;
int greenPin = D1;
int time1;
String msg = "Enter The Number of Time u want to Blink led ";
void setup()
{

    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    Serial.begin(9600);
    Serial.println("Hello DURGESH");
}

void loop()
{

    Serial.println(msg + " for led 1");
    delay(500);
    while (Serial.available() == 0)
    {
    }
    time1 = Serial.parseInt();
    while (time1--)
    {
        digitalWrite(redPin, HIGH);
        delay(50);
        digitalWrite(redPin, LOW);
        delay(50);
    }
    Serial.println(msg + " for led 2");
    while (Serial.available() == 0)
    {
    }
    time1 = Serial.parseInt();
    while (time1--)
    {
        digitalWrite(greenPin, HIGH);
        delay(50);
        digitalWrite(greenPin, LOW);
        delay(50);
    }
}
// time1 = Serial.parseInt();   // This keyword helps us to read the integer value from Serial Monitor.
// time1 = Serial.parseFloat(); // This keyword helps us to read the Floeat or Double  value from Serial Monitor.