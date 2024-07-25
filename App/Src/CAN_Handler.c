/*
 * CAN_Handler.c
 *
 *  Created on: Jul 23, 2024
 *      Author: Dominik
 */
#include <can_database.h>
#include <can_types.h>
#include "can.h"
#include "CAN_LIB.h"
#include "app.h"
#include "CAN_Handler.h"

extern enum BRAKE_LIGHT_Display_t BRAKE_LIGHT_Display;

static can_frame ACCU_FAN_SPEED_REQUEST;
static can_frame BRAKE_LIGHT_FRAME;
static can_frame HV_BMS_SLAVE_FRAME;
static can_frame ACCU_FAN_SPEED;

void CAN_Handler_Init() {

	CAN_Init(&hcan);

	CAN_InitFrame(&ACCU_FAN_SPEED_REQUEST, &hcan, ACCU_FAN_SPEED_REQUEST_ID,
	ACCU_FAN_SPEED_REQUEST_PERIOD, ACCU_FAN_SPEED_REQUEST_DLC);

	CAN_InitFrame(&BRAKE_LIGHT_FRAME, &hcan, BRAKE_LIGHT_FRAME_ID,
	BRAKE_LIGHT_FRAME_PERIOD, BRAKE_LIGHT_FRAME_DLC);

	CAN_InitFrame(&HV_BMS_SLAVE_FRAME, &hcan, HV_BMS_SLAVE_FRAME_ID,
	HV_BMS_SLAVE_FRAME_PERIOD, HV_BMS_SLAVE_FRAME_DLC);

	CAN_InitFrame(&ACCU_FAN_SPEED, &hcan, ACCU_FAN_SPEED_ID,
	ACCU_FAN_SPEED_PERIOD, ACCU_FAN_SPEED_DLC);
}

enum BRAKE_LIGHT_Display_t BRAKE_LIGHT_GetDisplay(void) {
	if (CAN_IsFrameActual(&BRAKE_LIGHT_FRAME)) {
		BRAKE_LIGHT_Display = BRAKE_LIGHT_FRAME.core.data[0];		//0 = OFF
		return BRAKE_LIGHT_Display;										//1 = ON
	}																//2 = ERROR
	BRAKE_LIGHT_Display = DISPLAY_ERROR;
	return BRAKE_LIGHT_Display;
}

uint8_t ACCU_GetFanSpeed(uint8_t fan_speed) {
	int fan_speed_temp = 0;
	int speed_increase = 0;
	static uint32_t latest_timestamp = 0;
	if (latest_timestamp != ACCU_FAN_SPEED_REQUEST.recieve_time_ms) {
		latest_timestamp = ACCU_FAN_SPEED_REQUEST.recieve_time_ms;
		fan_speed_temp = ACCU_FAN_SPEED_REQUEST.core.data[1];
		speed_increase = ACCU_FAN_SPEED_REQUEST.core.data[0];
		if(fan_speed_temp <= 0 && fan_speed_temp >= 100)
		{
			return fan_speed;
		}
		if(fan_speed != 0)
		{
			if(fan_speed_temp >= 0 && fan_speed_temp <= 100)
			{
				return fan_speed = fan_speed_temp;
			}
		}

		else if(speed_increase == 0)
		{
			return fan_speed = 0;
		}
		else if((speed_increase >= -100) && (speed_increase <= 100))
		{
			fan_speed += speed_increase;
			if (fan_speed < 0) {
				fan_speed = 0;
			} else if (fan_speed > 100) {
				fan_speed = 100;
			}
			return fan_speed;
		}
	}
	return fan_speed;
}

void ACCU_SendFanSpeed(uint8_t fan_speed) {
	ACCU_FAN_SPEED.core.data[0] = fan_speed;
	CAN_SendFrame_Periodically(&ACCU_FAN_SPEED);
}

