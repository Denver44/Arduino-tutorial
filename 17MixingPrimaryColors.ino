
int RED = D0;
int GREEN = D1;
int BLUE = D2;


void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);

}

void loop() {


  analogWrite(RED, 50);
  analogWrite(GREEN, 50);
  analogWrite(BLUE, 200);
  delay (1000);
  analogWrite(RED, 100);
  analogWrite(GREEN, 100);
  analogWrite(BLUE, 100);
  delay (1000);


}