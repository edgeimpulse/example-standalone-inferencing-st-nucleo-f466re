#ifndef _UART_H_
#define _UART_H_

#include <stdint.h>

#ifdef __cplusplus
 extern "C" {
#endif /* __cplusplus */

int uart_print(char* msg, uint16_t len);
void USART2_UART_Init(void);
     
#ifdef __cplusplus
 }
#endif /* __cplusplus */

#endif