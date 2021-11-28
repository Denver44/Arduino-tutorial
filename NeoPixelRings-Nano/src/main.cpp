#include <Arduino.h>
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif

#define PIN 6
#define NUMPIXELS 24

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 500; // delay for half a second

void setup()
{

  pixels.begin(); // This initializes the NeoPixel library.
}

void loop()
{

  for (int i = 0; i < NUMPIXELS; i++)
  {
    pixels.setPixelColor(i, pixels.Color(126, 46, 132));
    delay(delayval);
    pixels.show();
    pixels.setPixelColor(i, pixels.Color(209, 64, 129));
    delay(delayval);
    pixels.show();
    pixels.setPixelColor(i, pixels.Color(239, 121, 138));
    delay(delayval);
    pixels.show();
    pixels.setPixelColor(i, pixels.Color(249, 245, 227));
    delay(delayval);
    pixels.show();
    pixels.setPixelColor(i, pixels.Color(204, 245, 172));
    delay(delayval);
    pixels.show();
  }
}
