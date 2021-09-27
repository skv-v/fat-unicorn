#include "header.h"
#include "delay.c"

void main(){
  u8 cnt=0;i,cnt_status=0,cnt_inc=0,rst=0;
  LCD_init();
  LCD_reset(reset);
  LCD_cmd(coff);
  LCD_data('0');
  while(1){
    while( (RST != PRESSED) && (Cntr_start != PRESSED) && (Cntrl_cnt != PRESSED) );
    
    while( (RST == PRESSED) && (Cntr_start != PRESSED) && (Cntrl_cnt != PRESSED) ){
      rst_LED=0;
      rst=1;
    }
    delay_ms(50);
    rst_LCD=1;
    
    if(rst){
      cnt=0;
      cnt_status=0;
      LCD_cmd(reset);
      cnt_inc=0;
      LCD_data('0');
      rst=0;
    }
    
    while( (RST != PRESSED) && (Cntr_start != PRESSED) && (Cntrl_cnt == PRESSED) ){
      cnt_inc=1;
      CC_LCD=1;
    }
    delay_ms(50);
    CC_LCD=1;
    
    if(cnt_inc){
      cnt++;
      LCD_cmd(reset);
      LCD_num(cnt);
      delay_ms(300);
      cnt_status=0;
      cnt_inc=0;
    }
    
    while( (RST != PRESSED) && (Cntr_start == PRESSED) && (Cntrl_cnt != PRESSED) ){
      CD_LCD=0;
      cnt_status=1;
    }
    delay_ms(50);
    CS_LCD=1;
    
    if(cnt_status){
      LCD_cmd(reset);
      LCD_data('0');
      delay_ms(200);
      for(i=1; i<cnt; i++){
        LCD_cmd(reset);
        LCD_num(i);
        delay_ms(200);
      }
    }
  }
}
