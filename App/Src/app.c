/*
 * app.c
 *
 *  Created on: Jul 20, 2024
 *      Author: Dominik
 */
#include "main.h"
#include "app.h"
#include "tim.h"
#include "display_interface.h"

//change light behaviour from interactive to be compliant with Formula Student Rules
const enum BRAKE_LIGHT_Mode_t BRAKE_LIGHT_Mode = INTERACTIVE_BRAKE_LIGHT;
enum BRAKE_LIGHT_Display_t BRAKE_LIGHT_Display = DISPLAY_OFF;
//char displayed_text[] = "AGH Racing RTE 3.0 \"NEMO\" * Valeo * New Era Materials * Ceratizit * APW * Superior Industries * Fundacja dla AGH * Simracing Dream * Rega Yacht * IAMG * Vivtek *";
char displayed_text[] = "AGH Racing RTE 3.0 \"NEMO\"";
//set accumulator fan speed from 0-100%
static uint8_t fan_speed = 50;
//set display brightness from 0-100%
uint16_t brightness = 30;

int mainApp(void)
{
	initialize();

	while (1)
	{
		can_communication(&BRAKE_LIGHT_Display, &fan_speed);
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
