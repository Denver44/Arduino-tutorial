// The Serial Function is a tool is used to print Data on serial monitor.
// The Serial Monitor is on our Arduino Software IDE.
// This is very helpful to see our data on Monitor.
// For serial Monitor we have to begin its setup in void setup by writing Serial.begin(BaudRate)
// The BaudRate can be any 9600 or 115200 its is the frquency of data speed .

int x = 1;
float y = 3.14;
String name = "    DURGESH RAI   ";

void setup()
{
    Serial.begin(115200);
}
void loop()
{
    Serial.print(y);
    Serial.print(name);
    Serial.println(x);
    delay(1000);
    x = x + 1;
}
