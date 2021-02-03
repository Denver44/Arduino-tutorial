int LED = 16; // we have to declare our led here
int LED1 = 5; // we have to declare our led here
int LED2 = 4; // we have to declare our led here
int LED3 = 0; // we have to declare our led here

void setup()
{
    pinMode(LED, OUTPUT);
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
}
void loop()
{
    digitalWrite(LED, LOW); //0
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    delay(1500);
    digitalWrite(LED, LOW); // 1
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
    delay(1500);
    digitalWrite(LED, LOW);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH); // 2
    digitalWrite(LED3, LOW);
    delay(1500);
    digitalWrite(LED, LOW);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH); //3
    digitalWrite(LED3, HIGH);
    delay(1500);
    digitalWrite(LED, LOW);
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW); //4
    digitalWrite(LED3, LOW);
    delay(1500);
    digitalWrite(LED, LOW);
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW); //5
    digitalWrite(LED3, HIGH);
    delay(1500);

    digitalWrite(LED, LOW);
    digitalWrite(LED1, HIGH); //6
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, LOW);
    delay(1500);

    digitalWrite(LED, LOW);
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH); //7
    digitalWrite(LED3, HIGH);
    delay(1500);
    digitalWrite(LED, HIGH);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW); //8
    digitalWrite(LED3, LOW);
    delay(1500);
}
