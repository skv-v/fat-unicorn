#include "header.h"
#include "delay.c"

void main(){
  u8 cnt=0;
  LCD_init();
  LCD_cmd(coff);
  LCD_data('0');
  while(1){
    while(SW != PRESSED);
    while(SW == PRESSED);
    delay_ms(50);
    if(cnt<15){
      LCD_num(cnt);
      cnt++;
      LCD_cmd(home);
    }
    else{
      LCD_cmd(reset);
      cnt=0;
      LCD_data('0');
    }
  } 
}
