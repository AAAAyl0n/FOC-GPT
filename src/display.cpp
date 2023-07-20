#include "display.h"

TFT_eSPI tft = TFT_eSPI();

void display_init(){
  tft.init();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE);
  tft.setTextSize(1);
  tft.setCursor(0, 0);
  tft.print("Hello, It's me.\n");
}

void rabbit_init(){
  tft.fillScreen(TFT_BLACK);
  tft.setCursor(0, 0);
  tft.print("(\\(\\ \n");
  tft.print("(-.-)\n");
  tft.print("o_(\"(\")\n\n");
  tft.print("-wow what\n a nice\n day!");
}

void cat_wink(){
  tft.fillScreen(TFT_BLACK);
  tft.setCursor(0, 0);
  tft.print("  /\\_/\\ \n");
  tft.print(" ( o.o ) \n");
  tft.print(" >  ^ < \n");
  delay(500);
  tft.fillScreen(TFT_BLACK);
  tft.setCursor(0, 0);
  tft.print("  /\\_/\\ \n");
  tft.print(" ( -.- ) \n");
  tft.print(" >  ^ < \n");
  delay(500);
  tft.fillScreen(TFT_BLACK);
  tft.setCursor(0, 0);
  tft.print("  /\\_/\\ \n");
  tft.print(" ( x.x ) \n");
  tft.print(" >  ^ < \n");
  delay(500);
  tft.fillScreen(TFT_BLACK);
  tft.setCursor(0, 0);
  tft.print("  /\\_/\\ \n");
  tft.print(" ( -.- ) \n");
  tft.print(" >  ^ < \n");
  delay(500);
  tft.fillScreen(TFT_BLACK);
  tft.setCursor(0, 0);
  tft.print("  /\\_/\\ \n");
  tft.print(" ( o.o ) \n");
  tft.print(" >  ^ < \n");
  delay(500);
}

void cat_sleep(){
  tft.fillScreen(TFT_BLACK);
  tft.setCursor(0, 0);
  tft.print("  /\\_/\\ \n");
  tft.print(" ( -.- ) \n");
  tft.print(" >  ^ < \n");
  tft.print("-I'm tired\n");
  tft.print("zzz");
}