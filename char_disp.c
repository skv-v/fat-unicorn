// to display a single character on the LCD

#include "header.h"
#include "dealy.c"

void main(){
  u8 ch='A';  // character to be displayed on the LCD
  LCD_init();
  LCD_data(ch);
  while(1);
}
