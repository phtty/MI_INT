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
//-----------------OLED端口定义----------------

#define OLED_DC_Reset()		HAL_GPIO_WritePin(OLED_DC_GPIO_Port, OLED_DC_Pin, GPIO_PIN_RESET)	// DC
#define OLED_DC_Set()		HAL_GPIO_WritePin(OLED_DC_GPIO_Port, OLED_DC_Pin, GPIO_PIN_SET)

#define OLED_CS_Reset()		HAL_GPIO_WritePin(OLED_CS1_GPIO_Port, OLED_CS1_Pin, GPIO_PIN_RESET)	// CS1
#define OLED_CS_Set()		HAL_GPIO_WritePin(OLED_CS1_GPIO_Port, OLED_CS1_Pin, GPIO_PIN_SET)

#define OLED_READ_FS0()		HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_6)	// FS0

#define OLED_ROM_CS_Reset() HAL_GPIO_WritePin(OLED_CS2_GPIO_Port, OLED_CS2_Pin, GPIO_PIN_RESET)	// CS2
#define OLED_ROM_CS_Set()	HAL_GPIO_WritePin(OLED_CS2_GPIO_Port, OLED_CS2_Pin, GPIO_PIN_SET)

#define OLED_CMD			0 // 写命令
#define OLED_DATA			1 // 写数据

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
