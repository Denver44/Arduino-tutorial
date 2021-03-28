char input[12];
int count = 0, State1 = 0, State2 = 0;
String s1 = "";
int Led1 = D0, Led2 = D1;
void setup()
{
  Serial.begin(9600);
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
}

void loop()
{
  if (Serial.available())
  {
    count = 0;
    while (Serial.available() && count < 12)
    {
      input[count] = Serial.read();
      count++;
      delay(5);
    }
    for (int i = 0; i < 12; i++)
      s1 += input[i];
  }

  if (s1 == "5500CC796181" && State1 == 0)
  {
    digitalWrite(Led1, HIGH);
    Serial.println("ON1");
    State1 = 1;
  }
  else if (s1 == "5500CC796181" && State1 == 1)
  {
    digitalWrite(Led1, LOW);
    Serial.println("OFF1");
    State1 = 0;
  }
  else if (s1 == "5500B52E1CD2" && State2 == 0)
  {
    digitalWrite(Led2, HIGH);
    Serial.println("ON2");
    State2 = 1;
  }
  else if (s1 == "5500B52E1CD2" && State2 == 1)
  {
    digitalWrite(Led2, LOW);
    Serial.println("OFF2");
    State2 = 0;
  }
  s1 = "";
}