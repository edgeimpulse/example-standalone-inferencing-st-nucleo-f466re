/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 07/11/2023 16:09:48
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated by STM32CubeMX (DO NOT EDIT!)
 ******************************************************************************/

#ifndef __MX_DEVICE_H
#define __MX_DEVICE_H

/*---------------------------- Clock Configuration ---------------------------*/

#define MX_LSI_VALUE                            32000
#define MX_LSE_VALUE                            32768
#define MX_HSI_VALUE                            16000000
#define MX_HSE_VALUE                            8000000
#define MX_EXTERNAL_CLOCK_VALUE                 12288000
#define MX_PLLCLKFreq_Value                     180000000
#define MX_PLLQCLKFreq_Value                    180000000
#define MX_PLLRCLKFreq_Value                    180000000
#define MX_PLLSAIPCLKFreq_Value                 48000000
#define MX_PLLSAIQCLKFreq_Value                 48000000
#define MX_PLLI2SPCLKFreq_Value                 48000000
#define MX_PLLI2SQCLKFreq_Value                 48000000
#define MX_PLLI2SRCLKFreq_Value                 48000000
#define MX_SYSCLKFreq_VALUE                     180000000
#define MX_HCLKFreq_Value                       180000000
#define MX_FCLKCortexFreq_Value                 180000000
#define MX_CortexFreq_Value                     180000000
#define MX_AHBFreq_Value                        180000000
#define MX_APB1Freq_Value                       45000000
#define MX_APB2Freq_Value                       90000000
#define MX_APB1TimFreq_Value                    90000000
#define MX_APB2TimFreq_Value                    180000000
#define MX_CECFreq_Value                        32786
#define MX_I2S1Freq_Value                       48000000
#define MX_I2S2Freq_Value                       48000000
#define MX_SAIAFreq_Value                       48000000
#define MX_SAIBFreq_Value                       48000000
#define MX_SDIOFreq_Value                       180000000
#define MX_PWRFreq_Value                        180000000
#define MX_RTCFreq_Value                        32000
#define MX_USBFreq_Value                        180000000
#define MX_WatchDogFreq_Value                   32000
#define MX_FMPI2C1Freq_Value                    45000000
#define MX_SPDIFRXFreq_Value                    180000000
#define MX_MCO1PinFreq_Value                    16000000
#define MX_MCO2PinFreq_Value                    180000000

/*-------------------------------- SYS        --------------------------------*/

#define MX_SYS                                  1

/* GPIO Configuration */

/* Pin PA13 */
#define MX_SYS_JTMS_SWDIO_Pin                   PA13

/* Pin PA14 */
#define MX_SYS_JTCK_SWCLK_Pin                   PA14

/*-------------------------------- USART2     --------------------------------*/

#define MX_USART2                               1

#define MX_USART2_VM                            VM_ASYNC

/* GPIO Configuration */

/* Pin PA2 */
#define MX_USART2_TX_GPIO_ModeDefaultPP         GPIO_MODE_AF_PP
#define MX_USART2_TX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART2_TX_Pin                        PA2
#define MX_USART2_TX_GPIOx                      GPIOA
#define MX_USART2_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART2_TX_GPIO_Pin                   GPIO_PIN_2
#define MX_USART2_TX_GPIO_AF                    GPIO_AF7_USART2

/* Pin PA3 */
#define MX_USART2_RX_GPIO_ModeDefaultPP         GPIO_MODE_AF_PP
#define MX_USART2_RX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART2_RX_Pin                        PA3
#define MX_USART2_RX_GPIOx                      GPIOA
#define MX_USART2_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART2_RX_GPIO_Pin                   GPIO_PIN_3
#define MX_USART2_RX_GPIO_AF                    GPIO_AF7_USART2

/* NVIC Configuration */

/* NVIC USART2_IRQn */
#define MX_USART2_IRQn_interruptPremptionPriority 0
#define MX_USART2_IRQn_PriorityGroup            NVIC_PRIORITYGROUP_0
#define MX_USART2_IRQn_Subriority               0

/*-------------------------------- NVIC       --------------------------------*/

#define MX_NVIC                                 1

/*-------------------------------- GPIO       --------------------------------*/

#define MX_GPIO                                 1

/* GPIO Configuration */

#endif  /* __MX_DEVICE_H */

