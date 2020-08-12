#include "main.h"

BMP280_DEV bmp280;
float temperature, pressure, altitude;

void bmp280_setup (void)
{
  bmp280.begin(BMP280_I2C_ALT_ADDR);
  // Options for bellow are _05MS, _62MS, _125MS, _250MS, _500MS, _1000MS, 2000MS, 4000MS
  bmp280.setTimeStandby(TIME_STANDBY_1000MS);
  // bmp280.setPresOversampling(OVERSAMPLING_X4);
  // bmp280.setTempOversampling(OVERSAMPLING_X1);
  bmp280.setIIRFilter(IIR_FILTER_4);
  bmp280.startNormalConversion();
}

void bmp280_loop (void)
{
  if ( bmp280.getMeasurements(temperature, pressure, altitude) )
  {
    Serial.print(temperature);
    Serial.print(F("*C   "));
    Serial.print(pressure);
    Serial.print(F("hPa   "));
    Serial.print(altitude);
    Serial.println(F("m"));
  }
}
