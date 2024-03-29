#include <Adafruit_NeoPixel.h>
#include <stdlib.h>

// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1:
#define LED_PIN    6

// How many NeoPixels are attached to the Arduino?
#define LED_COUNT 36

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

byte matrix[36] = {
  0,1,1,1,0,0,
  2,2,2,1,1,1,
  2,2,2,1,1,1,
  0,1,1,1,1,1,
  0,1,0,0,1,0,
  0,1,0,0,1,0
};


void setup() {
  strip.begin();
  strip.setBrightness(50);
  strip.show(); // Initialize all pixels to 'off'

}

void loop() {


  strip.clear();


  for (int j=0;j<255;j++) {
    strip.clear();
    for (byte i=0;i<35;i++) {
      if (matrix[i] == 1) {
          strip.setPixelColor(i, Wheel(j));
      }
      else if (matrix[i] == 2){
          strip.setPixelColor(i, Wheel((j + 50) % 255));
      }
    }
    strip.show();
    delay(10);
  }

for (int i=0;i<6;i++) {
  if (i == 0) {
    matrix[i] = matrix[5];
    delay(50)
  }
  else {
    matrix[i] = matrix[i-1];
    delay(50)
  }
  
}
for (int i=6;i<12;i++) {
  if (i == 6) {
    matrix[i] = matrix[11];
    delay(50)
  }
  else {
    matrix[i] = matrix[i-1];
    delay(50)
  }
  
}
for (int i=12;i<18;i++) {
  if (i == 12) {
    matrix[i] = matrix[17];
    delay(50)
  }
  else {
    matrix[i] = matrix[i-1];
    delay(50)
  }
  
}
for (int i=18;i<24;i++) {
  if (i == 18) {
    matrix[i] = matrix[23];
    delay(50)
  }
  else {
    matrix[i] = matrix[i-1];
    delay(50)
  }
  
}
for (int i=24;i<30;i++) {
  if (i == 1) {
    matrix[24] = matrix[29];
    delay(50)
  }
  else {
    matrix[i] = matrix[i-1];
    delay(50)
  }
  
}
for (int i=30;i<36;i++) {
  if (i == 30) {
    matrix[i] = matrix[35];
    delay(50)
  }
  else {
    matrix[i] = matrix[i-1];
    delay(50)
  }
  
}

// Input a value 0 to 255 to get a color value.
// The colours are a transition r - g - b - back to r.
uint32_t Wheel(byte WheelPos)
{
    WheelPos = 255 - WheelPos;
    if(WheelPos < 85)
    {
        return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
    }
    else if(WheelPos < 170)
    {
        WheelPos -= 85;
        return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
    }
    else
    {
        WheelPos -= 170;
        return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
    }
}
