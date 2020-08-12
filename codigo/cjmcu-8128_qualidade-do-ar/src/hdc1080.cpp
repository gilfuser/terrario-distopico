#include "main.h"

ClosedCube_HDC1080  hdc1080;
unsigned long previousMillis2 = 0;
const long interval2 = 1000;

void hdc1080_setup()
{
	hdc1080.begin(0x40);
}

void hdc1080_loop()
{
  unsigned long currentMillis2 = millis();
  if ( currentMillis2 - previousMillis2 >= interval2 )
  {
    Serial.print("T=");
    Serial.print(hdc1080.readTemperature());
    Serial.print("C, RH=");
    Serial.print(hdc1080.readHumidity());
    Serial.println("%");
    previousMillis2 = currentMillis2;
  }
}
