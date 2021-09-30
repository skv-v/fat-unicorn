void timer_init(void){
  TMOD=0x01;
  TH0=0xD8;
  TL0=0xEF;
}
