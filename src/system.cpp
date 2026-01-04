#include "system.h"
#include "ui.h"
#include "apps.h"

Screen currentScreen = BOOT;
int batteryLevel = 87;

unsigned long bootTime;
unsigned long lastSwitch;

void systemInit(TFT_eSPI* tft) {
  bootTime = millis();
  lastSwitch = millis();
}

void systemLoop(TFT_eSPI* tft) {
  if (currentScreen == BOOT && millis() - bootTime > 2500) {
    currentScreen = HOME;
    drawHomeScreen(tft);
  }

  // Simulation multitâche OS
  if (millis() - lastSwitch > 4000) {
    lastSwitch = millis();

    if (currentScreen == HOME) {
      currentScreen = PHONE;
      drawPhoneApp(tft);
    } else if (currentScreen == PHONE) {
      currentScreen = MESSAGES;
      drawMessagesApp(tft);
    } else if (currentScreen == MESSAGES) {
      currentScreen = SETTINGS;
      drawSettingsApp(tft);
    } else {
      currentScreen = HOME;
      drawHomeScreen(tft);
    }
  }

  // Batterie dynamique (5️⃣)
  if (batteryLevel > 0 && millis() % 15000 < 50) {
    batteryLevel--;
  }
}
