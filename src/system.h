#ifndef SYSTEM_H
#define SYSTEM_H

#include <TFT_eSPI.h>

enum Screen {
  BOOT,
  HOME,
  PHONE,
  MESSAGES,
  SETTINGS
};

void systemInit(TFT_eSPI* tft);
void systemLoop(TFT_eSPI* tft);

extern int batteryLevel;
extern Screen currentScreen;

#endif
