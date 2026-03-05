#include "lcd_.h"
#include "delay.h"



void setup() {
    lcd_init();
    lcd_print_lines("Ready","to run!");
    delay_ms(2000);
}

void loop() {
    lcd_print_lines("Hello Asmita!", "I2C LCD Ready");
    delay_ms(2000);

    lcd_print_lines("I2C Address:", "0x27 Working");
    delay_ms(2000);

    lcd_print_lines("Using Delay", "delay_ms OK");
    delay_ms(2000);
}

