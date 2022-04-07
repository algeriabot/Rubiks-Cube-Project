/*
	TO FILL IN LATER
    Sketch title

    The circuit:
    * Adafruit Feather M4
	* Adafruit NeoPxl8 M4 Featherwing
	* Wiring harness to breadboard
	* 5V 10A power supply and NeoPxl8 data to light strips 

    Last modified 7 April 22
    Gabe, Kevin, Lucas, Neev, Owen, Quinn, and Rishy
	Ms. Hill's B5 Algebra 2, 2021-22

	https://github.com/t-ebag/Rubiks-Cube-Project

*/

// Number of LEDs per side
#define LEDS_PER_FACE 324

// Import libraries
#include <Adafruit_NeoPXL8.h>

// Pin options
int8_t pins[8] = { PIN_SERIAL1_RX, PIN_SERIAL1_TX, MISO, 13, 5, SDA, A4, A3 };

// Create and initialize strip object
Adafruit_NeoPXL8 strip(NUM_LED, pins, NEO_GRB);

// Define color values
// **To be filled in later with Art Team**

uint32_t RED = strip.Color(255, 0, 0);
uint32_t GREEN = strip.Color(0, 255, 0);
uint32_t BLUE = strip.Color(0, 0, 255);
uint32_t WHITE = strip.Color(255, 255, 255);
uint32_t ORANGE = strip.Color(255, 215, 0);
uint32_t YELLOW = strip.Color(255, 255, 0);


// SETUP FUNCTION----------------------------------
void setup() {
	strip.begin();
	strip.setBrightness(64); // 1/4 brightness
}
// END SETUP FUNCTION------------------------------






// LOOP FUNCTION-----------------------------------
void loop() {
	

	
}
// END LOOP FUNCTION-------------------------------






// SETLIGHT FUNCTION-------------------------------
void setLight(int face, int n, uint32_t color) {
	// face is a number from 0 to 5
	// Offset the number by 324*face, since everything is one strip
	// ex: setLight(4, 20, RED)
	strip.setPixelColor(n + (LEDS_PER_FACE * face), color);
}
// END SETLIGHT FUNCTION---------------------------
