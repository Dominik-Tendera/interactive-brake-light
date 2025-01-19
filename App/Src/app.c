/*
 * app.c
 *
 *  Created on: Jul 20, 2024
 *      Author: Dominik
 */
#include "main.h"
#include "app.h"xt
#include "tim.h"
#include "CAN_Handler.h"
#include "display_interface.h"

//change light behaviour from interactive to be compliant with Formula Student Rules
const enum BRAKE_LIGHT_Mode_t BRAKE_LIGHT_Mode = INTERACTIVE_BRAKE_LIGHT;
enum BRAKE_LIGHT_Display_t BRAKE_LIGHT_Display = DISPLAY_OFF;
//char displayed_text[] = "AGH Racing RTE 3.0 \"NEMO\" * Valeo * New Era Materials * Ceratizit * APW * Superior Industries * Fundacja dla AGH * Simracing Dream * Rega Yacht * IAMG * Vivtek *";
char displayed_text[] = "AGH Racing RTE 3.0 \"NEMO\"";
//set accumulator fan speed from 0-100%
static uint8_t fan_speed = 50;
//set display brightness from 0-100
uint16_t brightness = 100;

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
		fan_speed = ACCU_GetFanSpeed(fan_speed);					//CZY TE 3 LINIJKI CHOWAĆ DO FUNKCJI, TAK SAMO Z BRIGHTNESS?
		//negation logic
		__HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_3, MAX_FAN_SPEED - fan_speed);
		ACCU_SendFanSpeed(fan_speed);
		//brightness = GetBrightness(brightness);
		set_brightness(brightness);

		switch(BRAKE_LIGHT_Display)
		{
		case DISPLAY_ON:
			display_on();
			break;

		case DISPLAY_OFF:
			conditional_display_off(BRAKE_LIGHT_Mode, displayed_text);
			break;

		case DISPLAY_ERROR:
			display_error();
			break;

		case DISPLAY_ANIMATION:
			if (BRAKE_LIGHT_Mode == INTERACTIVE_BRAKE_LIGHT)
			{
				display_animation(displayed_text);
			}
			break;
		}
	}
	return 0;
}
