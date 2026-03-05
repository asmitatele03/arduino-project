#ifndef LCD_H
#define LCD_H




#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include "delay.h"     // include delay header

// I2C LCD object declaration
extern LiquidCrystal_I2C lcd;

void lcd_init();
void lcd_print_lines(const char *line1, const char *line2);

#endif
