#include <Arduino.h>
#include "main.h"

void setup()
{
  Serial.begin(115200);
  delay(2000);
  Wire.setSCL(16);
  Wire.setSDA(17);
  Wire.begin();
  Serial.println("CJMCU-8128 CCS811 + HDC1080 + BMP280 Example");
  hdc1080_setup();
  bmp280_setup();
  myCSS811_setup();
}

unsigned long previousMillis0 = 0;
const long interval0 = 1;

void loop()
{
  unsigned long currentMillis = millis();
  if ( currentMillis - previousMillis0 >= interval0 )
  {
    hdc1080_loop();
    bmp280_loop();
    myCSS811_loop();
  }
}
