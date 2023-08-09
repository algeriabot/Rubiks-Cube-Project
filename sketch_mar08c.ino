
#include <Adafruit_NeoPixel.h>
#include <stdlib.h>


// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1:
#define LED_PIN    6

// How many NeoPixels are attached to the Arduino?
#define LED_COUNT 10

// Declare our NeoPixel strip object:
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

uint32_t red = strip.Color(25, 0, 25);
void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'


}

void loop() {
  for (int i = 0; i < 150; i++) {
    int color1 = rand()%255 + 1;
    strip.setPixelColor(i,color1 , 0, 0);
    strip.setPixelColor(i - 1, 100, 100, 100);
    strip.setPixelColor(i - 2, 10, 25, 90);
    strip.show();
    strip.clear();
    delay(50);
  }
  for (int i = 150; i > 0; i--) {
    strip.setPixelColor(i, 255, 0, 0);
    strip.setPixelColor(i + 1, 100, 100, 100);
    strip.setPixelColor(i + 2, 10, 25, 90);
    strip.show();
    strip.clear();
    delay(50);
  }

}
