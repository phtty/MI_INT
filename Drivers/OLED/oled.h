#ifndef __OLED_H
#define __OLED_H

#include "main.h"
#include "stdlib.h"
#include "spi.h"
#include "gpio.h"

// SCL=SCLK
// SDA=MOSI
// DC=DC
// CS=CS1
// FS0=MOSI
// CS2=CS2
//-----------------OLED�˿ڶ���----------------

#define OLED_SCL_Reset()	GPIO_ResetBits(GPIOA, GPIO_Pin_0) // SCL
#define OLED_SCL_Set()		GPIO_SetBits(GPIOA, GPIO_Pin_0)

#define OLED_SDA_Reset()	GPIO_ResetBits(GPIOA, GPIO_Pin_1) // SDA
#define OLED_SDA_Set()		GPIO_SetBits(GPIOA, GPIO_Pin_1)

#define OLED_DC_Reset()		GPIO_ResetBits(GPIOA, GPIO_Pin_2) // DC
#define OLED_DC_Set()		GPIO_SetBits(GPIOA, GPIO_Pin_2)

#define OLED_CS_Reset()		GPIO_ResetBits(GPIOA, GPIO_Pin_3) // CS1
#define OLED_CS_Set()		GPIO_SetBits(GPIOA, GPIO_Pin_3)

#define OLED_READ_FS0()		GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_4) // FS0

#define OLED_ROM_CS_Reset() GPIO_ResetBits(GPIOA, GPIO_Pin_5) // CS2
#define OLED_ROM_CS_Set()	GPIO_SetBits(GPIOA, GPIO_Pin_5)

#define OLED_CMD			0 // д����
#define OLED_DATA			1 // д����

void OLED_ColorTurn(uint8_t i);
void OLED_DisplayTurn(uint8_t i);
void OLED_WR_Byte(uint8_t dat, uint8_t cmd);
void OLED_Clear(void);
void OLED_address(uint8_t x, uint8_t y);
void OLED_Display_128x64(uint8_t *dp);
void OLED_Display_16x16(uint8_t x, uint8_t y, uint8_t *dp);
void OLED_Display_8x16(uint8_t x, uint8_t y, uint8_t *dp);
void OLED_Display_5x7(uint8_t x, uint8_t y, uint8_t *dp);
void Send_Command_to_ROM(uint8_t dat);
uint8_t Get_data_from_ROM(void);
void OLED_get_data_from_ROM(uint8_t addrHigh, uint8_t addrMid, uint8_t addrLow, uint8_t *pbuff, uint8_t DataLen);
void OLED_Display_GB2312_string(uint8_t x, uint8_t y, uint8_t *text);
void OLED_Display_string_5x7(uint8_t x, uint8_t y, uint8_t *text);
void OLED_ShowNum(uint8_t x, uint8_t y, float num, uint8_t len);
void OLED_Init(void);
#endif
