#include <Arduino.h>
#include "lcd_.h"





// Create LCD object at I2C address 0x27
LiquidCrystal_I2C lcd(0x27, 16, 2);

void lcd_init() {
    lcd.init();
    lcd.backlight();    
}

void lcd_print_lines(const char *line1, const char *line2) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(line1);
    lcd.setCursor(0, 1);
    lcd.print(line2);
}

