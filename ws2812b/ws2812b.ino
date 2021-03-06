/*  drive ws2812b led's from parallax
 *   with Bufferfly board at 80mhz
 *  Developer: Michael Burmeister
 *  Date: March 16, 2017
 *  
 *  This is freeware written for fun
 */
 
#include "Arduino.h"
#include "ws2812b.h"

ws2812b strip;
uint32_t GRB[5];

void setup() {
  Serial.begin(115200);
  delay(5000);
  
  strip.setPin(20);
  strip.ColorValue(0,255,0);
  GRB[0] = strip.ColorValue(255,0,0);  //Red
  GRB[1] = strip.ColorValue(0,255,0);  //Green
  GRB[2] = strip.ColorValue(0,0,255);  //Blue
  GRB[3] = strip.ColorValue(32,32,32); //light white ish
  GRB[4] = strip.ColorValue(64,64,64); //brighter white ish
  strip.setLEDs(GRB, 5);  //send the colors
}

void loop() {
  // put your main code here, to run repeatedly:

}



