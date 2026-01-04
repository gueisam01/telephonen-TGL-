#include <TFT_eSPI.h>
#include "ui.h"
#include "system.h"
#include "apps.h"

TFT_eSPI tft = TFT_eSPI();

void setup() {
  tft.init();
  tft.setRotation(1);

  systemInit(&tft);
  drawBootScreen(&tft);
}

void loop() {
  systemLoop(&tft);
}
