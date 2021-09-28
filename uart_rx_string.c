#include "header.h"
#include "delay.c"

void main(){
  u8 arr[13];   // array to hold 13 characters of a string
  uart_init(9600);
  while(1){
    uart_rx_string(arr,12);   // the function will accept only 12 characters as input here.
    LCD_cmd(reset);
    LCD_string(arr);
  }
}
