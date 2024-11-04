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

const enum BRAKE_LIGHT_Mode_t BRAKE_LIGHT_Mode = INTERACTIVE_BRAKE_LIGHT;			//change brake light behaviour to be compliant with FSG Rules
enum BRAKE_LIGHT_Display_t BRAKE_LIGHT_Display = DISPLAY_OFF;
char displayed_text[] = "AGH Racing RTE 3.0 \"NEMO\" <3";
uint8_t timeout_flag = 1;													//when light display changes from OFF in INTERACTIVE mode to any other, this flag and 'display_change' are changed
uint8_t display_change = 0;													//this is used for counting the constant time from entering DISPLAY_OFF, after which the text will show up
static uint8_t fan_speed = 50;												//speed in % from 0-100%
uint16_t brightness = 500;													//br

int mainApp(void)
{
	//CAN_Handler_Init();
	HAL_TIM_Base_Start(&htim3);
	HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_4);
	HAL_TIM_Base_Start(&htim2);
	HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_3);

	while (1)
	{
		BRAKE_LIGHT_Display = BRAKE_LIGHT_GetDisplay();
		fan_speed = ACCU_GetFanSpeed(fan_speed);					//CZY TE 3 LINIJKI CHOWAĆ DO FUNKCJI, TAK SAMO Z BRIGHTNESS?
		__HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_3, 100 - fan_speed);		//negation logic
		ACCU_SendFanSpeed(fan_speed);
		//brightness = GetBrightness(brightness);
		set_brightness(brightness);

		switch(BRAKE_LIGHT_Display)
		{
		case DISPLAY_ON:
			timeout_flag = 0;		//CZY TE FLAGI SCHOWAĆ DO FUNKCJI?
			display_change = 1;
			display_on();
			break;

		case DISPLAY_OFF:
			conditional_display_off(BRAKE_LIGHT_Mode, displayed_text);
			break;

		case DISPLAY_ERROR:
			timeout_flag = 0;
			display_change = 1;
			display_error();
			break;

		case DISPLAY_ANIMATION:
			if (BRAKE_LIGHT_Mode == INTERACTIVE_BRAKE_LIGHT)
			{
				timeout_flag = 0;
				display_change = 1;
				display_text(displayed_text);
			}
			break;

		}
	}
	return 0;
}
