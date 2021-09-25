// input string is scrolled linearly from left to right 

#include "header.h"
#include "delay.c"

void main(){
  u8 i,pos=1,len;
  s8 str[]="hello world";   // string o/p on the LCD
  LCD_init();
  LCD_cmd(coff);
  
  len=strlen(str);
  for(i=0;i<16-len+1;i++){
    LCD_cmd(reset);
    LCD_cpos(1,pos);
    LCD_string(str);
    pos++;
    delay_ms(200);
  }
}
