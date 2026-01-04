#ifndef UI_H
#define UI_H

#include <TFT_eSPI.h>

void drawBootScreen(TFT_eSPI* tft);
void drawHomeScreen(TFT_eSPI* tft);
void drawBattery(TFT_eSPI* tft, int level);

#endif
