// To display a string on the LCD

#include "header.h"
#include "delay.c"

void main(){
  LCD_init();
  LCD_cmd(coff);  // turn off the cursor
  LCD_string("test string - 1");
  LCD_cpos(2,1);  // LCD cursor pointing to starting of second line
  LCD_string("test string - 2");
  while(1);
}
