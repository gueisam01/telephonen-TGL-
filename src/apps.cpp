#include "apps.h"
#include "ui.h"
#include "system.h"

void drawPhoneApp(TFT_eSPI* tft) {
  tft->fillScreen(TFT_BLACK);
  drawBattery(tft, batteryLevel);
  tft->setTextColor(TFT_GREEN);
  tft->setTextSize(2);
  tft->setCursor(40, 200);
  tft->println("Telephone");
  tft->setCursor(20, 240);
  tft->println("GSM : simulation");
}

void drawMessagesApp(TFT_eSPI* tft) {
  tft->fillScreen(TFT_DARKGREY);
  drawBattery(tft, batteryLevel);
  tft->setTextColor(TFT_WHITE);
  tft->setTextSize(2);
  tft->setCursor(60, 200);
  tft->println("Messages");
}

void drawSettingsApp(TFT_eSPI* tft) {
  tft->fillScreen(TFT_DARKGREEN);
  drawBattery(tft, batteryLevel);
  tft->setTextColor(TFT_WHITE);
  tft->setTextSize(2);
  tft->setCursor(40, 120);
  tft->println("Parametres");
  tft->setTextSize(1);
  tft->setCursor(40, 160);
  tft->println("WiFi / BT : PRET");
}
