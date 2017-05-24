//----------------------------------------
// IDE: Arduino 1.8.0
// Connection:
// I2C_LCD1602 ------ arduino uno
//    VCC ---------------- 5V
//    GND ---------------- GND
//    SDA ---------------- A4
//    SCL ---------------- A5
//---------------------------------------
// include the library code
#include <LiquidCrystal_I2C.h>
// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
    lcd.init();      // Initialize the lcd
    lcd.backlight(); // Open the backlight 
}

void loop() {
    lcd.setCursor(4, 0); // Set the cursor to column 4, line 0
    lcd.print("Eeenjoy"); // Print message
  
    lcd.setCursor(2, 1);
    lcd.print("Hello, World!");  
}

