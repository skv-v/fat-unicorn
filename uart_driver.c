void uart_float(u8 no*){
  if(*no == 0){
    uart_tx('0');
    LCD_data('0');
  }
  
  if(*no == '-'){
    uart_tx('-');
    LCD_data('-');
  }
  
  while( (*no>=0) && (*no<=9) ){
    uart_tx(*no);
    LCD_data(*no);
    no++;
  }
  
  if(*no == '.'){
    uart_tx('.');
    LCD_data('.');
  }
  
  while( (*no>=0) && (*no<=9) ){
    uart_tx(*no);
    LCD_data(*no);
    no++;
  }
}
