#include "header.h"
#include "delay.c"

void main(){
  u8 pos,len,i;
  s8 str[]="hello world',rev[20],temp[20];
    my-strcpy(str,rev);
    LCD_init();
    LCD_cmd(coff);
    len=strle(str);
    strrev(str);
    while(1){
       pos=1;
       while(pos<=16){
         LCD_cpos(1,pos);
         LCD_string(str);
         pos++;
         
         if(pos>16-len+2){
           LCD_cmd(home);
           for(i=0;i<(pos-(16-len+2);i++){
             temp[i]=rev[i];
           }
           temp[i]='\0';
           strrev(temp);
           LCD_string(temp);
         }
      delay_ms(200);
      LCD_cmd(reset);
    }
  }
}
