/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
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
#include "stm32f4xx_hal.h"

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
#define JACK_DET_Pin GPIO_PIN_0
#define JACK_DET_GPIO_Port GPIOC
#define ENC_A_Pin GPIO_PIN_0
#define ENC_A_GPIO_Port GPIOA
#define ENC_B_Pin GPIO_PIN_1
#define ENC_B_GPIO_Port GPIOA
#define ENC_SW_Pin GPIO_PIN_2
#define ENC_SW_GPIO_Port GPIOA
#define BTN_USER_Pin GPIO_PIN_3
#define BTN_USER_GPIO_Port GPIOA
#define AMP_PLIMIT_Pin GPIO_PIN_4
#define AMP_PLIMIT_GPIO_Port GPIOA
#define TFT_SCK_Pin GPIO_PIN_5
#define TFT_SCK_GPIO_Port GPIOA
#define TFT_BL_Pin GPIO_PIN_6
#define TFT_BL_GPIO_Port GPIOA
#define TFT_MOSI_Pin GPIO_PIN_7
#define TFT_MOSI_GPIO_Port GPIOA
#define TFT_DC_Pin GPIO_PIN_4
#define TFT_DC_GPIO_Port GPIOC
#define TFT_RST_Pin GPIO_PIN_5
#define TFT_RST_GPIO_Port GPIOC
#define TFT_CS_Pin GPIO_PIN_0
#define TFT_CS_GPIO_Port GPIOB
#define AMP_SD_Pin GPIO_PIN_1
#define AMP_SD_GPIO_Port GPIOB
#define AMP_MUTE_Pin GPIO_PIN_2
#define AMP_MUTE_GPIO_Port GPIOB
#define I2S_WS_Pin GPIO_PIN_12
#define I2S_WS_GPIO_Port GPIOB
#define I2S_CK_Pin GPIO_PIN_13
#define I2S_CK_GPIO_Port GPIOB
#define I2S_DIN_Pin GPIO_PIN_15
#define I2S_DIN_GPIO_Port GPIOB
#define I2S_MCK_Pin GPIO_PIN_6
#define I2S_MCK_GPIO_Port GPIOC
#define USB_ALERT_Pin GPIO_PIN_8
#define USB_ALERT_GPIO_Port GPIOC
#define USB_SDA_Pin GPIO_PIN_9
#define USB_SDA_GPIO_Port GPIOC
#define USB_SCL_Pin GPIO_PIN_8
#define USB_SCL_GPIO_Port GPIOA
#define BT_RX_Pin GPIO_PIN_9
#define BT_RX_GPIO_Port GPIOA
#define BT_TX_Pin GPIO_PIN_10
#define BT_TX_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define I2S_WSA15_Pin GPIO_PIN_15
#define I2S_WSA15_GPIO_Port GPIOA
#define I2S_CKC10_Pin GPIO_PIN_10
#define I2S_CKC10_GPIO_Port GPIOC
#define I2S_DOUT_Pin GPIO_PIN_12
#define I2S_DOUT_GPIO_Port GPIOC
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
