#ifndef _DISPLAY_H_
#define _DISPLAY_H_

#include <TFT_eSPI.h>
#include <SPI.h>


extern TFT_eSPI tft;

void display_init();
void cat_wink();
void cat_sleep();
void rabbit_init();

#endif