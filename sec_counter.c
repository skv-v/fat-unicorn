#include "header.h"
#include "dealy.c"

void main(){
  u8 cnt;
  LCD_init();
  while(1){
    for(cnt=0; cnt<60; cnt++){
      LCD_num(cnt);
      delay_ms(1000);
      LCD_cmd(reset);
    }
  }
}
