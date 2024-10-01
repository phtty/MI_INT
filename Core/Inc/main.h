/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file           : main.h
 * @brief          : Header for main.c file.
 *                   This file contains the common defines of the application.
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_Pin					GPIO_PIN_3			// 开发板LED
#define LED_GPIO_Port			GPIOE
#define ENCODER_CLK_Pin			GPIO_PIN_0			// 编码器
#define ENCODER_CLK_GPIO_Port	GPIOA
#define ENCODER_DT_Pin			GPIO_PIN_1
#define ENCODER_DT_GPIO_Port	GPIOA
#define ENCODER_SW_Pin			GPIO_PIN_2
#define ENCODER_SW_GPIO_Port	GPIOA
#define OLED_DC_Pin				GPIO_PIN_4			// OLED片选
#define OLED_DC_GPIO_Port		GPIOA
#define OLED_CS1_Pin			GPIO_PIN_4			// OLED片选
#define OLED_CS1_GPIO_Port		GPIOC
#define OLED_CS2_Pin			GPIO_PIN_5
#define OLED_CS2_GPIO_Port		GPIOC

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
