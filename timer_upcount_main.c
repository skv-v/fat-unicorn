#include "header.h"
#include "delay.c"

void main(){
  timer_init();
  LCD_init();
  LCD_cmd(coff);
  while(1){
    timer0_start();
  }
}
