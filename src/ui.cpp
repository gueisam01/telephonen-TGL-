#include "ui.h"

void drawBattery(TFT_eSPI* tft, int level) {
  tft->drawRoundRect(260, 10, 40, 18, 4, TFT_WHITE);
  tft->fillRoundRect(262, 12, level / 3, 14, 3,
                     level > 30 ? TFT_GREEN : TFT_RED);
  tft->setCursor(215, 12);
  tft->setTextSize(1);
  tft->print(level);
  tft->print("%");
}

void drawBootScreen(TFT_eSPI* tft) {
  tft->fillScreen(TFT_BLACK);
  tft->setTextColor(TFT_WHITE);
  tft->setTextSize(3);
  tft->setCursor(50, 180);
  tft->println("TGLci");
  tft->setTextSize(2);
  tft->setCursor(55, 230);
  tft->println("by Armstrong");
}

void drawHomeScreen(TFT_eSPI* tft) {
  tft->fillScreen(TFT_NAVY);
  drawBattery(tft, 87);

  tft->setTextColor(TFT_WHITE);
  tft->setTextSize(2);
  tft->setCursor(20, 40);
  tft->println("Accueil");

  tft->drawRoundRect(40, 100, 80, 80, 18, TFT_WHITE);
  tft->drawRoundRect(140, 100, 80, 80, 18, TFT_WHITE);
  tft->drawRoundRect(240, 100, 80, 80, 18, TFT_WHITE);
}
