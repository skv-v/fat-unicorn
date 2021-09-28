#include <reg51.h>

#define ON 1
#define OFF 0
#define PRESSED 0
#define PORT_RESET 0xFF;

#define port0 P0
#define port1 P1
#define port2 P2
#define port3 P3

#define PORT0 0
#define PORT1 1
#define PORT2 2
#define PORT3 3

#define coff 0x0C
#define con 0x0e
#define cblink 0x0F
#define mode4 0x28
#define mode8 0x38
#define reset 0x01
#define home 0x02

sbit RS=port1^0;
sbit RW=port1^1;
sbit EN=port1^2;

sbit RST=port3^5;
sbit Cnt_start=port3^6;
sbit Cnt_cnt=port3^7;

sbit SW=port3^0;

sbit rst_LED=port3^0;
sbit CS_LED=port3^1;
sbit CC_LED=port3^2;

typedef unsigned char u8;
typedef unsigned int u16;
typedef signed char s8;
typedef signed int s16;

extern void delay_ms(u16);
extern void LCD_init();
extern void LCD_data(u8);
extern void LCD_cmd(u8);
extern void LCD_string(s8*);
extern void LCD_cpos(u8,u8);
extern void strrev(s8*);
extern void my_strcpy(const u8*,u8*);
extern void LCD_int(u16);
extern void LCD_float(float);
extern void uart_int(u8*);
extern void uart_float(u8*);
extern void uart_rx_string(u8*,u8);
exrern void en_uart_interrupt(void);
extern void uart_handler(void) interrupt 4;
