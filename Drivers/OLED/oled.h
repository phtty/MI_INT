#ifndef __OLED_H
#define __OLED_H 

// #include "sys.h"

//SCL=SCLK 
//SDA=MOSI
//DC=DC
//CS=CS1
//FS0=MOSI
//CS2=CS2
//-----------------OLED�˿ڶ���---------------- 

#define OLED_SCL_Clr() GPIO_ResetBits(GPIOA,GPIO_Pin_0)//SCL
#define OLED_SCL_Set() GPIO_SetBits(GPIOA,GPIO_Pin_0)

#define OLED_SDA_Clr() GPIO_ResetBits(GPIOA,GPIO_Pin_1)//SDA
#define OLED_SDA_Set() GPIO_SetBits(GPIOA,GPIO_Pin_1)

#define OLED_DC_Clr()  GPIO_ResetBits(GPIOA,GPIO_Pin_2)//DC
#define OLED_DC_Set()  GPIO_SetBits(GPIOA,GPIO_Pin_2)
 		     
#define OLED_CS_Clr()  GPIO_ResetBits(GPIOA,GPIO_Pin_3)//CS1
#define OLED_CS_Set()  GPIO_SetBits(GPIOA,GPIO_Pin_3)
 		     
#define OLED_READ_FS0()    GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_4)//FS0

#define OLED_ROM_CS_Clr()  GPIO_ResetBits(GPIOA,GPIO_Pin_5)//CS2
#define OLED_ROM_CS_Set()  GPIO_SetBits(GPIOA,GPIO_Pin_5)

#define OLED_CMD  0	//д����
#define OLED_DATA 1	//д����

void OLED_ColorTurn(u8 i);
void OLED_DisplayTurn(u8 i);
void OLED_WR_Byte(u8 dat,u8 cmd);
void OLED_Clear(void);
void OLED_address(u8 x,u8 y);
void OLED_Display_128x64(u8 *dp);
void OLED_Display_16x16(u8 x,u8 y,u8 *dp);
void OLED_Display_8x16(u8 x,u8 y,u8 *dp);
void OLED_Display_5x7(u8 x,u8 y,u8 *dp);
void Send_Command_to_ROM(u8 dat);
u8 Get_data_from_ROM(void);
void OLED_get_data_from_ROM(u8 addrHigh,u8 addrMid,u8 addrLow,u8 *pbuff,u8 DataLen);
void OLED_Display_GB2312_string(u8 x,u8 y,u8 *text);
void OLED_Display_string_5x7(u8 x,u8 y,u8 *text);
void OLED_ShowNum(u8 x,u8 y,float num,u8 len);
void OLED_Init(void);
#endif

