//1. This is used fo analogWrite.
//2. In this we dont have to give command like HIGH and Low.
//3. We have to give command betweeen 0 to 255.
//4. here 0 is 0 volts and 255  is 5 Volts.
//5. In Arduino Uno we have section for the PWM Pins you can identify it easily by seeing a tilt sign front of it.
//6. In ESP8266  the PWM pins are D6 ,D0,D1,D2 and etc RSV pin PIN 12.

// ---------- ESP8266-----------  0 -1023 (Duty Cycle)
// Enables software PWM on the specified pin.duty cycle is in the range from 0 to PWMRANGE, i.e.1023 by default.

// ----------- ARDUINO UNO -------- 0-255 (Duty Cycle)
// value: the duty cycle: between 0 (always off) and 255 (always on). Allowed data types: int.

int Ledpin = D6; // we have to declare our led here
int bright = 100;  //(0 -1023) for ESP8266 and (0-255) For UNO

void setup()
{
    pinMode(Ledpin, OUTPUT);
}
void loop()
{
    analogWrite(Ledpin, bright); //0
}
