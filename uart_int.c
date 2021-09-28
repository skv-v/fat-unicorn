#include "header.h"
#include "delay.c"

void main(){
  u8 d[10];
  uart_init();
  LCD_cmd(coff);
  while(1){
    uart_string("enter a no");
    uart_rx_string(d,10);   // to accept a string/no of max 10 char/digits
    LCD_cmd(reset);
    uart_int(d);
    uart_string("\r\n");
  }
}
