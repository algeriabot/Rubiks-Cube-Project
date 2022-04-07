# Algebra 2 Class Project

## Code Style Guide (Tentative)

#### Please reference https://docs.arduino.cc/hacking/software/ArduinoStyleGuide

**Variable and function names:** Descriptive names please, between 4 and 15ish characters. Use camel case, first word lowercase (ex: `int myCoolVariable = 10`)

**Constant variables:** All caps (ex: `float PI = 3.14159`)

**Math:** Spaces surrounding all math symbols (+, -, *, /) (ex: `int newVar = oldVar + 5`)

**Logic:** Spaces surrounding boolean operators and equality symbols (ex: `if ((var == 4) && (var2 <= 5))`)

**Comments:** Start with // and add a space. The more, the better. Descriptive and helpful comments only, please.

**Functions:** `setup()` and `loop()` go at the beginning of the program. Add a space after the closing parenthesis. Add extended comments before and after the function like so:

```
//XYZ FUNCTION------------------------------
void xyz() {
	someCodeHere();
}
//END XYZ FUNCTION--------------------------
```


**Other:** Add spaces after every comma in arguments or a list (ex: `result = myFunction(x, y, z)`)

## Other Resources
Links for the NeoPxl8:

Adafruit: https://learn.adafruit.com/adafruit-neopxl8-featherwing-and-library/neopxl8-arduino-library

Github: https://github.com/adafruit/Adafruit_NeoPXL8

Soldering tips for the lights: https://learn.adafruit.com/make-it-glow-how-to-solder-neopixels-a-beginners-guide/soldering-strips