/*
 * app.c
 *
 *  Created on: Jul 20, 2024
 *      Author: Dominik
 */
#include "main.h"
#include "app.h"
#include "tim.h"
#include "CAN_Handler.h"
#include "display_interface.h"

enum BRAKE_LIGHT_Mode_t BRAKE_LIGHT_Mode = INTERACTIVE_BRAKE_LIGHT;
enum BRAKE_LIGHT_Display_t BRAKE_LIGHT_Display = DISPLAY_OFF;
char displayed_text[] = "Jebac DV 8===D";
uint8_t timeout_flag = 1;
uint8_t display_change = 0;
static uint8_t fan_speed = 100;				//pamietac zeby odwrocic logike speeda (stan niski to wlaczony)
uint16_t brightness = 990;

size_t check = 0; //debug

void turn_off(enum BRAKE_LIGHT_Mode_t BRAKE_LIGHT_Mode){
	static uint32_t lastInteractiveTick = 0;
	if(BRAKE_LIGHT_Mode == BASIC_BRAKE_LIGHT){
		display_off();
	}
	else if(BRAKE_LIGHT_Mode == INTERACTIVE_BRAKE_LIGHT){
		check = HAL_GetTick();
		if(display_change)
		{
			display_off();
			lastInteractiveTick = HAL_GetTick();
			display_change = 0;
			reset_text();
		}
		else if (timeout_flag)
		{
			display_text(displayed_text);
		}
		if (HAL_GetTick() - lastInteractiveTick >= INTERACTIVE_TIMEOUT)
		{
			lastInteractiveTick = HAL_GetTick();
			timeout_flag = 1;
		}
	}
}

int mainApp(void)
{
	CAN_Handler_Init();
	HAL_TIM_Base_Start(&htim3);
	HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_4);
	HAL_TIM_Base_Start(&htim2);
	HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_3);


	while (1)
	{
		BRAKE_LIGHT_Display = BRAKE_LIGHT_GetDisplay();
		fan_speed = ACCU_GetFanSpeed(fan_speed);
		ACCU_SendFanSpeed(fan_speed);
		__HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_3, 100 - fan_speed);
		set_brightness(brightness);

		switch(BRAKE_LIGHT_Display)
		{
		case DISPLAY_ON:
			timeout_flag = 0;
			display_change = 1;
			display_on();
			break;

		case DISPLAY_OFF:
			turn_off(BRAKE_LIGHT_Mode);
			break;

		case DISPLAY_ERROR:
			timeout_flag = 0;
			display_change = 1;
			clear_buffer();
			drawString(1, 0, "Er");
			send_display();
			break;
		}
	}
	return 0;
}
