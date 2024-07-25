/*
 * CAN_Handler.h
 *
 *  Created on: Jul 23, 2024
 *      Author: Dominik
 */

#ifndef INC_CAN_HANDLER_H_
#define INC_CAN_HANDLER_H_

void CAN_Handler_Init(void);
enum BRAKE_LIGHT_Display_t BRAKE_LIGHT_GetDisplay(void);
uint8_t ACCU_GetFanSpeed(uint8_t fan_speed);
void ACCU_SendFanSpeed(uint8_t fan_speed);

#endif /* INC_CAN_HANDLER_H_ */
