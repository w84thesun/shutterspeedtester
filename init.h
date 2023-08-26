#include <Adafruit_SSD1306.h>

// OLED settings
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C ///< See datasheet for Address; 0x3c for 128x64 OLED

#define MILLIS() 1000 // 1 msec.
#define SEC() 1000000 // 1 sec.
#define RESET_DELAY_SECONDS 5 * MS() // delay time between readings.


Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// Sets up the OLED display parameters.
void displayInitialScreen() {
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,3);

  display.println("Shutter Speed Tester");
  display.display();
}
