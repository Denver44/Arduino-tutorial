// product adding and subtacting code with name and price final 0ct 23
#include <Wire.h>  
#include <LiquidCrystal_I2C.h>
#include <stdio.h>
#include <ctype.h>

LiquidCrystal_I2C lcd(0x3F,16,2);  // SET I2C Address
char reader_data[12] = "\n";
String inputString = "";
String apple = "5500C7D692D6";
String soap = "5500E94457AF";
String cream = "5500CC796181";
String biscuit = "5500CEA07E45";
String maggie = "5500E535E96C";
String milk = "07001684DE4B";
int flag = 0, flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0, flag5 = 0,;
int count=0;
unsigned int Total_bal = 0;
void setup() {
  Wire.begin(12,13);
  lcd.init();
  lcd.backlight(); // makes Backligh ON. 
  lcd.clear();     // Clears LCD
  lcd.home();      // Sets cursor at Column 0 and Line 0                                     
  Serial.begin(9600);
  lcd.clear();
  delay(1);
  lcd.setCursor(3, 0);
  lcd.print("Welcome To");
  lcd.setCursor(1, 1);
  lcd.print("Smart Shopping");
  delay(3000);
  lcd.clear();
  delay(1);
}
void loop()
 {
  //lcd.noDisplay();
  lcd.setCursor(0, 0);
  lcd.print("ITEM :");
  delay(1);
  //Serial.println("Pass 1");
  while (Serial.available()) {
    char inChar = (char)Serial.read();
    inputString += inChar;
  }
  Serial.println(inputString);
  if (inputString == apple && (flag == 0)) 
{
    Serial.println("apple = ");
    Serial.println(inputString);
    inputString = "";
    Total_bal = Total_bal + 60;
    count=count+1;
    lcd.clear();
    delay(1);
    lcd.setCursor(0, 0);
    lcd.print("ITEM :");
    lcd.setCursor(6, 0);
    lcd.print("apple");
    lcd.setCursor(0, 1);
    lcd.print("Pri:60  Tot:");
    lcd.setCursor(12, 1);
    lcd.print(Total_bal);
    lcd.setCursor(14, 0);
    lcd.print(count);
    flag = 1;delay(1000);
  }
  else if (inputString == soap && (flag1 == 0))
 {
    Serial.println("soap = ");
    Serial.println(inputString);
    inputString = "";
    Total_bal = Total_bal + 20;
    count=count+1;
    lcd.clear();
    delay(1);
    lcd.setCursor(0, 0);
    lcd.print("ITEM :");
    lcd.setCursor(6, 0);
    lcd.print("soap");
    lcd.setCursor(0, 1);
    lcd.print("Pri:20  Tot:");
    lcd.setCursor(12, 1);
    lcd.print(Total_bal);
    lcd.setCursor(14, 0);
    lcd.print(count);
    flag1 = 1;delay(1000);
  }
  else if (inputString == cream && (flag2 == 0)) 
{
    Serial.println("cream = ");
    Serial.println(inputString);
    inputString = "";
    Total_bal = Total_bal + 60;
    count=count+1;
    lcd.clear();
    delay(1);
    lcd.setCursor(0, 0);
    lcd.print("ITEM :");
    lcd.setCursor(6, 0);
    lcd.print("cream");
    lcd.setCursor(0, 1);
    lcd.print("Pri:60  Tot:");
    lcd.setCursor(12, 1);
    lcd.print(Total_bal);
    lcd.setCursor(14, 0);
    lcd.print(count);
    flag2 = 1;delay(1000);
  }
  else if (inputString == biscuit && (flag3 == 0))
 {
    Serial.println("biscuit = ");
    Serial.println(inputString);
    inputString = "";
    Total_bal = Total_bal + 20;
    count=count+1;
    lcd.clear();
    delay(1);
    lcd.setCursor(0, 0);
    lcd.print("ITEM :");
    lcd.setCursor(6, 0);
    lcd.print("biscuit");
    lcd.setCursor(0, 1);
    lcd.print("Pri:20  Tot:");
    lcd.setCursor(12, 1);
    lcd.print(Total_bal);
    lcd.setCursor(14, 0);
    lcd.print(count);
    flag3 = 1;delay(1000);
  }
 else if (inputString == maggie && (flag4 == 0))
 {
    Serial.println("maggie = ");
    Serial.println(inputString);
    inputString = "";
    Total_bal = Total_bal + 40;
    count=count+1;
    lcd.clear();
    delay(1);
    lcd.setCursor(0, 0);
    lcd.print("ITEM :");
    lcd.setCursor(6, 0);
    lcd.print("maggie");
    lcd.setCursor(0, 1);
    lcd.print("Pri:40  Tot:");
    lcd.setCursor(12, 1);
    lcd.print(Total_bal);
    lcd.setCursor(14, 0);
    lcd.print(count);
    flag4 = 1;delay(1000);
  }
 else if (inputString == milk  && (flag5 == 0))
 {
    Serial.println("milk = ");
    Serial.println(inputString);
    inputString = "";
    Total_bal = Total_bal + 10;
    count=count+1;
    lcd.clear();
    delay(1);
    lcd.setCursor(0, 0);
    lcd.print("ITEM :");
    lcd.setCursor(6, 0);
    lcd.print("milk");
    lcd.setCursor(0, 1);
    lcd.print("Pri:10  Tot:");
    lcd.setCursor(12, 1);
    lcd.print(Total_bal);
    lcd.setCursor(14, 0);
    lcd.print(count);
    flag5 = 1;delay(1000);
  }`
  else if (inputString == apple && (flag == 1))
 {
    Serial.println("apple = ");
    Serial.println(inputString);
    inputString = "";
    Total_bal = Total_bal - 60;
    count=count-1;
    lcd.clear();
    delay(1);
    lcd.setCursor(0, 0);
    lcd.print("ITEM :");
    lcd.setCursor(6, 0);
    lcd.print("apple");
    lcd.setCursor(0, 1);
    lcd.print("Pri:60  Tot:");
    lcd.setCursor(12, 1);
    lcd.print(Total_bal);
    lcd.setCursor(14, 0);
    lcd.print(count);
    flag = 0;delay(1000);
  }
  else if (inputString == soap && (flag1 == 1))
 {
    Serial.println("soap = ");
    Serial.println(inputString);
    inputString = "";
    Total_bal = Total_bal - 20;
    count=count-1;
    lcd.clear();
    delay(1);
    lcd.setCursor(0, 0);
    lcd.print("ITEM :");
    lcd.setCursor(6, 0);
    lcd.print("soap");
    lcd.setCursor(0, 1);
    lcd.print("Pri:20  Tot:");
    lcd.setCursor(12, 1);
    lcd.print(Total_bal);
    lcd.setCursor(14, 0);
    lcd.print(count);
    flag1 = 0;delay(1000);
  }
  else if (inputString == cream && (flag2 == 1)) 
{
    Serial.println("cream = ");
    Serial.println(inputString);
    inputString = "";
    Total_bal = Total_bal - 60;
    count=count-1;
    lcd.clear();
    delay(1);
    lcd.setCursor(0, 0);
    lcd.print("ITEM :");
    lcd.setCursor(6, 0);
    lcd.print("cream");
    lcd.setCursor(0, 1);
    lcd.print("Pri:60  Tot:");
    lcd.setCursor(12, 1);
    lcd.print(Total_bal);
    lcd.setCursor(14, 0);
    lcd.print(count);
    flag2 = 0;delay(1000);
  }
  else if (inputString == biscuit && (flag3 == 1)) 
{
    Serial.println("biscuit = ");
    Serial.println(inputString);
    inputString = "";
    Total_bal = Total_bal - 20;
    count=count-1;
    lcd.clear();
    delay(1);
    lcd.setCursor(0, 0);
    lcd.print("ITEM :");
    lcd.setCursor(6, 0);
    lcd.print("biscuit");
    lcd.setCursor(0, 1);
    lcd.print("Pri:20  Tot:");
    lcd.setCursor(12, 1);
    lcd.setCursor(14, 0);
    lcd.print(count);
    lcd.print(Total_bal);
    flag3 = 0;
    delay(1000);
  }
 else if (inputString == maggie  && (flag4 == 1)) 
{
    Serial.println("maggie = ");
    Serial.println(inputString);
    inputString = "";
    Total_bal = Total_bal - 40;
    count=count-1;
    lcd.clear();
    delay(1);
    lcd.setCursor(0, 0);
    lcd.print("ITEM :");
    lcd.setCursor(6, 0);
    lcd.print("maggie");
    lcd.setCursor(0, 1);
    lcd.print("Pri:40  Tot:");
    lcd.setCursor(12, 1);
    lcd.setCursor(14, 0);
    lcd.print(count);
    lcd.print(Total_bal);
    flag4 = 0;
    delay(1000);
  }
 else if (inputString == milk  && (flag5 == 1)) 
{
    Serial.println("milk  = ");
    Serial.println(inputString);
    inputString = "";
    Total_bal = Total_bal - 10;
    count=count-1;
    lcd.clear();
    delay(1);
    lcd.setCursor(0, 0);
    lcd.print("ITEM :");
    lcd.setCursor(6, 0);
    lcd.print("milk");
    lcd.setCursor(0, 1);
    lcd.print("Pri:10  Tot:");
    lcd.setCursor(12, 1);
    lcd.setCursor(14, 0);
    lcd.print(count);
    lcd.print(Total_bal);
    flag5 = 0;
    delay(1000);
  }
}
