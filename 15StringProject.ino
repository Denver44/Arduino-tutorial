
String msg = "Hello, Enter Your LED name which u want to Bright up ";
String name1;
int redled = D0;
int greenled = D1;

void setup() {
pinMode(redled,OUTPUT);
pinMode(greenled,OUTPUT);

Serial.begin(9600);

}

void loop() {

  Serial.println(msg);
  while(Serial.available()== 0) {
  }
  name1 = Serial.readString();

  if(name1 == "RED" || name1 == "red")
  {
    digitalWrite(redled,HIGH);
    delay(500);
     digitalWrite(redled,LOW);
    delay(500);
  }
  else
  {
     digitalWrite(greenled,HIGH);
    delay(100);
     digitalWrite(greenled,LOW);
    delay(100);
  }

}