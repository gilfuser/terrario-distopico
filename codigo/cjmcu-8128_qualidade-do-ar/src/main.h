#ifndef MAIN_H
#define MAIN_H
#include<Wire.h>
#include <BMP280_DEV.h> 
#include <SparkFunCCS811.h>     // CO² e tVOC
#include <ClosedCube_HDC1080.h>

void myCSS811_setup();
void myCSS811_loop();
void bmp280_setup();
void bmp280_loop();
void hdc1080_setup();
void hdc1080_loop();

#endif
