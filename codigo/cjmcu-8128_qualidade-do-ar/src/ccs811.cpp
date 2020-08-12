#include "main.h"

#define CCS811_ADDR 0x5A
#define PIN_NOT_INT 2
CCS811 myCSS811(CCS811_ADDR);

ClosedCube_HDC1080  myHDC1080;

void myCSS811_setup (void)
{
  CCS811Core::CCS811_Status_e returnCode = myCSS811.beginWithStatus();
  Serial.print("CCS811 begin exited with: ");
  Serial.println(myCSS811.statusString(returnCode));

  // sets mode to read-rate
  returnCode = myCSS811.setDriveMode(1); // 1 = 1s | 2 = 10s | 3 = 1m | 4 = 0.25s
  Serial.print("Mode request exited with: ");
  Serial.println(myCSS811.statusString(returnCode));

  pinMode(PIN_NOT_INT, INPUT_PULLUP);
  returnCode = myCSS811.enableInterrupts();
  Serial.print("Interrupt configuration exited with: ");
  Serial.println(myCSS811.statusString(returnCode));
	myHDC1080.begin(0x40);
}

void myCSS811_loop (void)
{
  if ( digitalRead(PIN_NOT_INT) == 0 )
  {
    float hdcTemp = myHDC1080.readTemperature();
    float hdcUmid = myHDC1080.readHumidity();
    myCSS811.setEnvironmentalData(hdcUmid, hdcTemp);
    myCSS811.readAlgorithmResults();
    Serial.print("CO2[");
    Serial.print(myCSS811.getCO2());
    Serial.print("] tVOC[");
    Serial.print(myCSS811.getTVOC());
    Serial.print("]");
    Serial.println();
  }
}
