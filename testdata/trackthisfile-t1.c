/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    stm32wbxx_it.c
  * @brief   Interrupt Service Routines.
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

/* Includes ------------------------------------------------------------------*/
#include "stm32wbxx_it.h"
#include "main.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN TD */

/* USER CODE END TD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/* External variables --------------------------------------------------------*/
extern I2C_HandleTypeDef hi2c1;
extern I2C_HandleTypeDef hi2c3;
//extern LPTIM_HandleTypeDef hlptim1;
//extern LPTIM_HandleTypeDef hlptim2;
extern DMA_HandleTypeDef hdma_sai1_a;
//extern SAI_HandleTypeDef hsai_BlockA1;
extern DMA_HandleTypeDef hdma_spi2_tx;
/* USER CODE BEGIN EV */

/* USER CODE END EV */

/******************************************************************************/
/*           Cortex Processor Interruption and Exception Handlers          */
/******************************************************************************/
/**
  * @brief This function handles Non maskable interrupt.
  */
void NMI_Handler(void)
{
  /* USER CODE BEGIN NonMaskableInt_IRQn 0 */

  /* USER CODE END NonMaskableInt_IRQn 0 */
  /* USER CODE BEGIN NonMaskableInt_IRQn 1 */
  while (1)
  {
  }
  /* USER CODE END NonMaskableInt_IRQn 1 */
}

/**
  * @brief This function handles Hard fault interrupt.
  */
void HardFault_Handler(void)
{
  /* USER CODE BEGIN HardFault_IRQn 0 */

  /* USER CODE END HardFault_IRQn 0 */
  while (1)
  {
    /* USER CODE BEGIN W1_HardFault_IRQn 0 */
    /* USER CODE END W1_HardFault_IRQn 0 */
  }
}

/**
  * @brief This function handles Memory management fault.
  */
void MemManage_Handler(void)
{
  /* USER CODE BEGIN MemoryManagement_IRQn 0 */

  /* USER CODE END MemoryManagement_IRQn 0 */
  while (1)
  {
    /* USER CODE BEGIN W1_MemoryManagement_IRQn 0 */
    /* USER CODE END W1_MemoryManagement_IRQn 0 */
  }
}

/**
  * @brief This function handles Prefetch fault, memory access fault.
  */
void BusFault_Handler(void)
{
  /* USER CODE BEGIN BusFault_IRQn 0 */

  /* USER CODE END BusFault_IRQn 0 */
  while (1)
  {
    /* USER CODE BEGIN W1_BusFault_IRQn 0 */
    /* USER CODE END W1_BusFault_IRQn 0 */
  }
}

/**
  * @brief This function handles Undefined instruction or illegal state.
  */
void UsageFault_Handler(void)
{
  /* USER CODE BEGIN UsageFault_IRQn 0 */

  /* USER CODE END UsageFault_IRQn 0 */
  while (1)
  {
    /* USER CODE BEGIN W1_UsageFault_IRQn 0 */
    /* USER CODE END W1_UsageFault_IRQn 0 */
  }
}

/**
  * @brief This function handles System service call via SWI instruction.
  */
void SVC_Handler(void)
{
  /* USER CODE BEGIN SVCall_IRQn 0 */

  /* USER CODE END SVCall_IRQn 0 */
  /* USER CODE BEGIN SVCall_IRQn 1 */

  /* USER CODE END SVCall_IRQn 1 */
}

/**
  * @brief This function handles Debug monitor.
  */
void DebugMon_Handler(void)
{
  /* USER CODE BEGIN DebugMonitor_IRQn 0 */

  /* USER CODE END DebugMonitor_IRQn 0 */
  /* USER CODE BEGIN DebugMonitor_IRQn 1 */

  /* USER CODE END DebugMonitor_IRQn 1 */
}

/**
  * @brief This function handles Pendable request for system service.
  */
void PendSV_Handler(void)
{
  /* USER CODE BEGIN PendSV_IRQn 0 */

  /* USER CODE END PendSV_IRQn 0 */
  /* USER CODE BEGIN PendSV_IRQn 1 */

  /* USER CODE END PendSV_IRQn 1 */
}

/**
  * @brief This function handles System tick timer.
  */
void SysTick_Handler(void)
{
  /* USER CODE BEGIN SysTick_IRQn 0 */

  /* USER CODE END SysTick_IRQn 0 */
  HAL_IncTick();
  /* USER CODE BEGIN SysTick_IRQn 1 */
//  timer_update();

  /* USER CODE END SysTick_IRQn 1 */
}

/******************************************************************************/
/* STM32WBxx Peripheral Interrupt Handlers                                    */
/* Add here the Interrupt Handlers for the used peripherals.                  */
/* For the available peripheral interrupt handler names,                      */
/* please refer to the startup file (startup_stm32wbxx.s).                    */
/******************************************************************************/

/**
  * @brief This function handles DMA1 channel1 global interrupt.
  */
void DMA1_Channel1_IRQHandler(void)
{
  /* USER CODE BEGIN DMA1_Channel1_IRQn 0 */

  /* USER CODE END DMA1_Channel1_IRQn 0 */
  HAL_DMA_IRQHandler(&hdma_spi2_tx);
  /* USER CODE BEGIN DMA1_Channel1_IRQn 1 */

  /* USER CODE END DMA1_Channel1_IRQn 1 */
}
//
///**
//  * @brief This function handles DMA1 channel2 global interrupt.
//  */
//void DMA1_Channel2_IRQHandler(void)
//{
//  /* USER CODE BEGIN DMA1_Channel2_IRQn 0 */
//
//  /* USER CODE END DMA1_Channel2_IRQn 0 */
//  HAL_DMA_IRQHandler(&hdma_sai1_a);
//  /* USER CODE BEGIN DMA1_Channel2_IRQn 1 */
//
//  /* USER CODE END DMA1_Channel2_IRQn 1 */
//}
//void DMA2_Channel1_IRQHandler(void)
//{
//  /* USER CODE BEGIN DMA1_Channel2_IRQn 0 */
//
//  /* USER CODE END DMA1_Channel2_IRQn 0 */
//  HAL_DMA_IRQHandler(&hdma_sai1_a);
//  /* USER CODE BEGIN DMA1_Channel2_IRQn 1 */
//
//  /* USER CODE END DMA1_Channel2_IRQn 1 */
//}

/**
  * @brief This function handles I2C1 event interrupt.
  */
void I2C1_EV_IRQHandler(void)
{
  /* USER CODE BEGIN I2C1_EV_IRQn 0 */

  /* USER CODE END I2C1_EV_IRQn 0 */
  HAL_I2C_EV_IRQHandler(&hi2c1);
  /* USER CODE BEGIN I2C1_EV_IRQn 1 */

  /* USER CODE END I2C1_EV_IRQn 1 */
}

/**
  * @brief This function handles I2C1 error interrupt.
  */
void I2C1_ER_IRQHandler(void)
{
  /* USER CODE BEGIN I2C1_ER_IRQn 0 */

  /* USER CODE END I2C1_ER_IRQn 0 */
  HAL_I2C_ER_IRQHandler(&hi2c1);
  /* USER CODE BEGIN I2C1_ER_IRQn 1 */

  /* USER CODE END I2C1_ER_IRQn 1 */
}

/**
  * @brief This function handles I2C3 event interrupt.
  */
void I2C3_EV_IRQHandler(void)
{
  /* USER CODE BEGIN I2C3_EV_IRQn 0 */

  /* USER CODE END I2C3_EV_IRQn 0 */
  HAL_I2C_EV_IRQHandler(&hi2c3);
  /* USER CODE BEGIN I2C3_EV_IRQn 1 */

  /* USER CODE END I2C3_EV_IRQn 1 */
}

/**
  * @brief This function handles I2C3 error interrupt.
  */
void I2C3_ER_IRQHandler(void)
{
  /* USER CODE BEGIN I2C3_ER_IRQn 0 */

  /* USER CODE END I2C3_ER_IRQn 0 */
  HAL_I2C_ER_IRQHandler(&hi2c3);
  /* USER CODE BEGIN I2C3_ER_IRQn 1 */

  /* USER CODE END I2C3_ER_IRQn 1 */
}

/**
  * @brief This function handles USART1 global interrupt.
  */
void USART1_IRQHandler(void)
{
  /* USER CODE BEGIN USART1_IRQn 0 */
//	charger_uart_irq();
  /* USER CODE END USART1_IRQn 0 */
  /* USER CODE BEGIN USART1_IRQn 1 */

  /* USER CODE END USART1_IRQn 1 */
}

/**
  * @brief This function handles LPUART1 global interrupt.
  */
void LPUART1_IRQHandler(void)
{
  /* USER CODE BEGIN LPUART1_IRQn 0 */

  /* USER CODE END LPUART1_IRQn 0 */
//	bg77_uart_irq();
  /* USER CODE BEGIN LPUART1_IRQn 1 */

  /* USER CODE END LPUART1_IRQn 1 */
}

/**
  * @brief This function handles SAI1 global interrupt.
  */
//void SAI1_IRQHandler(void)
//{
//  /* USER CODE BEGIN SAI1_IRQn 0 */
//
//  /* USER CODE END SAI1_IRQn 0 */
//  HAL_SAI_IRQHandler(&hsai_BlockA1);
//  /* USER CODE BEGIN SAI1_IRQn 1 */
//
//  /* USER CODE END SAI1_IRQn 1 */
//}
//
///**
//  * @brief This function handles HSEM global interrupt.
//  */
//void IPCC_C1_TX_IRQHandler(void)
//{
//  HW_IPCC_Tx_Handler();
//
//  return;
//}
//
//void IPCC_C1_RX_IRQHandler(void)
//{
//  HW_IPCC_Rx_Handler();
//  return;
//}
//void HSEM_IRQHandler(void)
//{
//  /* USER CODE BEGIN HSEM_IRQn 0 */
//
//  /* USER CODE END HSEM_IRQn 0 */
//  HAL_HSEM_IRQHandler();
//  /* USER CODE BEGIN HSEM_IRQn 1 */
//
//  /* USER CODE END HSEM_IRQn 1 */
//}
//
///**
//  * @brief This function handles LPTIM1 global interrupt.
//  */
//void LPTIM1_IRQHandler(void)
//{
//  /* USER CODE BEGIN LPTIM1_IRQn 0 */
//
//  /* USER CODE END LPTIM1_IRQn 0 */
//  HAL_LPTIM_IRQHandler(&hlptim1);
//  /* USER CODE BEGIN LPTIM1_IRQn 1 */
//
//  /* USER CODE END LPTIM1_IRQn 1 */
//}
//
///**
//  * @brief This function handles LPTIM2 global interrupt.
//  */
//void LPTIM2_IRQHandler(void)
//{
//  /* USER CODE BEGIN LPTIM2_IRQn 0 */
//
//  /* USER CODE END LPTIM2_IRQn 0 */
//  HAL_LPTIM_IRQHandler(&hlptim2);
//  /* USER CODE BEGIN LPTIM2_IRQn 1 */
//
//  /* USER CODE END LPTIM2_IRQn 1 */
//}

/* USER CODE BEGIN 1 */

/* USER CODE END 1 */
