#include "header.h"
#include "delay.c"

void man(){
  LCD_init();
  LCD_cmd(coff);
  while(1){
    LCD_int(5);
    delay_ms(300);
    LCD_cmd(reset);
    
    LCD_int(0);
    delay_ms(300);
    LCD_cmd(reset);

    LCD_int(-5);
    delay_ms(300);
    LCD_cmd(reset);

    LCD_float(3.14);
    delay_ms(300);
    LCD_cmd(reset);

    LCD_float(0);
    delay_ms(300);
    LCD_cmd(reset);

    LCD_float(-3.14);
    delay_ms(300);
    LCD_cmd(reset);
  }
}
    
