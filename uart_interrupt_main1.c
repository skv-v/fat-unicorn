#include "header.h"
#include "delay.c"

void main(){
  uart_init(9600);
  en_uart_interrupt();
  while(1){
    LED_toggle(PORT0,0);
  }
}
