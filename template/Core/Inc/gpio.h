/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    gpio.h
  * @brief   This file contains all the function prototypes for
  *          the gpio.c file
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
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
#ifndef __GPIO_H__
#define __GPIO_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* USER CODE BEGIN Private defines */
#define OFF 								GPIO_PIN_SET
#define ON 									GPIO_PIN_RESET	
	
#define LED1(a)							HAL_GPIO_WritePin(LED_1_GPIO_Port,LED_1_Pin,a)
#define LED2(a)							HAL_GPIO_WritePin(LED_2_GPIO_Port,LED_2_Pin,a)
#define LED3(a)							HAL_GPIO_WritePin(LED_3_GPIO_Port,LED_3_Pin,a)
#define LED4(a)							HAL_GPIO_WritePin(LED_4_GPIO_Port,LED_4_Pin,a)
#define LED1_t							HAL_GPIO_TogglePin(LED_1_GPIO_Port,LED_1_Pin)
#define LED2_t							HAL_GPIO_TogglePin(LED_2_GPIO_Port,LED_2_Pin)
#define LED3_t							HAL_GPIO_TogglePin(LED_3_GPIO_Port,LED_3_Pin)
#define LED4_t							HAL_GPIO_TogglePin(LED_4_GPIO_Port,LED_4_Pin)



#define UP									0
#define DOWN								1

#define KEY1								HAL_GPIO_ReadPin(KEY_1_GPIO_Port, KEY_1_Pin)
#define KEY2								HAL_GPIO_ReadPin(KEY_2_GPIO_Port, KEY_2_Pin)
#define KEY3								HAL_GPIO_ReadPin(KEY_3_GPIO_Port, KEY_3_Pin)
#define KEY4								HAL_GPIO_ReadPin(KEY_4_GPIO_Port, KEY_4_Pin)
/* USER CODE END Private defines */

void MX_GPIO_Init(void);

/* USER CODE BEGIN Prototypes */

/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif
#endif /*__ GPIO_H__ */

