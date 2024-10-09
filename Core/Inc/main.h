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
#include "stm32g4xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define ISO_OP_1_Pin GPIO_PIN_13
#define ISO_OP_1_GPIO_Port GPIOC
#define ISO_OP_2_Pin GPIO_PIN_14
#define ISO_OP_2_GPIO_Port GPIOC
#define ISO_OP_3_Pin GPIO_PIN_15
#define ISO_OP_3_GPIO_Port GPIOC
#define ISO_IP_1_Pin GPIO_PIN_0
#define ISO_IP_1_GPIO_Port GPIOA
#define FET_TEMP_Pin GPIO_PIN_1
#define FET_TEMP_GPIO_Port GPIOA
#define VBUS_ADC_Pin GPIO_PIN_4
#define VBUS_ADC_GPIO_Port GPIOA
#define MOTOR_TEMP_Pin GPIO_PIN_5
#define MOTOR_TEMP_GPIO_Port GPIOA
#define ENC_A_Pin GPIO_PIN_6
#define ENC_A_GPIO_Port GPIOA
#define ENC_B_Pin GPIO_PIN_7
#define ENC_B_GPIO_Port GPIOA
#define ENC_INDEX_Pin GPIO_PIN_0
#define ENC_INDEX_GPIO_Port GPIOB
#define UNUSED_Pin GPIO_PIN_1
#define UNUSED_GPIO_Port GPIOB
#define CS_W_Pin GPIO_PIN_2
#define CS_W_GPIO_Port GPIOB
#define UNUSED2_Pin GPIO_PIN_10
#define UNUSED2_GPIO_Port GPIOB
#define CS_V_Pin GPIO_PIN_11
#define CS_V_GPIO_Port GPIOB
#define CS_U_Pin GPIO_PIN_12
#define CS_U_GPIO_Port GPIOB
#define DC_OVP_Pin GPIO_PIN_12
#define DC_OVP_GPIO_Port GPIOA
#define UNUSED3_Pin GPIO_PIN_15
#define UNUSED3_GPIO_Port GPIOA
#define SPI1_CS_Pin GPIO_PIN_6
#define SPI1_CS_GPIO_Port GPIOB
#define FAULT_LED_Pin GPIO_PIN_7
#define FAULT_LED_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
