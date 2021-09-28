#include "header.h"
#include "delay.c"

void main(){
  u8 d[13];
  LCD_init();
  uart_init(9600);
  LCD_cmd(coff);
  while(1){
    uart_string("enter a no : ");
    uart_rx_string(arr,10);
    LCD_cmd(reset);
    LCD_string(arr);
    uart_float(d);
    uart_string("\r\n");
  }
}
