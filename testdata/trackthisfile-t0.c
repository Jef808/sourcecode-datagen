#include "stm32wbxx_hal.h"

extern DMA_HandleTypeDef hdma_spi2_tx;

void SysTick_Handler(void)
{
  HAL_IncTick();
}
void DMA1_Channel1_IRQHandler(void)
{
    /* USER CODE BEGIN DMA1_Channel1_IRQn 0 */

    /* USER CODE END DMA1_Channel1_IRQn 0 */
    HAL_DMA_IRQHandler(&hdma_spi2_tx);
    /* USER CODE BEGIN DMA1_Channel1_IRQn 1 */

    /* USER CODE END DMA1_Channel1_IRQn 1 */
}


void EXTI0_IRQHandler(void)
{
    /* USER CODE BEGIN EXTI0_IRQn 0 */

    /* USER CODE END EXTI0_IRQn 0 */
    if (LL_EXTI_IsActiveFlag_0_31(LL_EXTI_LINE_0) != RESET)
    {
        LL_EXTI_ClearFlag_0_31(LL_EXTI_LINE_0);
        /* USER CODE BEGIN LL_EXTI_LINE_0 */

        /* USER CODE END LL_EXTI_LINE_0 */
    }
//
//    if(LL_GPIO_IsInputPinSet(MO_SNS_INT_GPIO_Port, MO_SNS_INT_Pin))
//        g_bhi160_interrupt_level = 1;
//    else
//        g_bhi160_interrupt_level = 0;

    /* USER CODE BEGIN EXTI0_IRQn 1 */

    /* USER CODE END EXTI0_IRQn 1 */
}

void EXTI1_IRQHandler(void)
{
    /* USER CODE BEGIN EXTI1_IRQn 0 */

    /* USER CODE END EXTI1_IRQn 0 */
    if (LL_EXTI_IsActiveFlag_0_31(LL_EXTI_LINE_1) != RESET)
    {
        LL_EXTI_ClearFlag_0_31(LL_EXTI_LINE_1);
        /* USER CODE BEGIN LL_EXTI_LINE_1 */

        /* USER CODE END LL_EXTI_LINE_1 */
    }
    /* USER CODE BEGIN EXTI1_IRQn 1 */

    /* USER CODE END EXTI1_IRQn 1 */
}
