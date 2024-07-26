/*
 * display_interface.c
 *
 *  Created on: Jul 24, 2024
 *      Author: Dominik
 */
#include <string.h>
#include "display_interface.h"
#include "app.h"
#include "spi.h"
#include "tim.h"

extern const char fontChars[];
uint8_t display_buffer[NUM_OF_COLUMNS];
int16_t x = 2;
int16_t y = 0;
uint8_t whitespace = 6;
uint32_t slide_delay = 30;
uint8_t variable = 0b10000000; 			//debugowe
extern uint8_t timeout_flag;
extern uint8_t display_change;

void set_brightness(uint16_t value)
{
	__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_4, value);
}

void clear_buffer(void)
{
	for(size_t index = 0; index < NUM_OF_COLUMNS; index++)
	{
		display_buffer[index] = 0b00000000;
	}
}

void display_off(void)
{
	for(size_t index = 0; index < NUM_OF_COLUMNS; index++)
	{
		display_buffer[index] = 0b00000000;
	}
	send_display();
}

void display_on(void){
	for(size_t index = 0; index < NUM_OF_COLUMNS; index++)
	{
		display_buffer[index] = 0b11111111;
	}
	send_display();
}

void set_one_pixel(uint8_t column, uint8_t row)
{
	if(row >= 0 && row <= 7 && column >= 0 && column <= 13){
		display_buffer[column] |= (0b00000001 << row);
	}
}

void drawChar(int x, int y, char character)
{
	for(uint8_t j = 0; j < 7; j++)
	{
		for(uint8_t i = 0; i < 8; i++)
		{
			if(fontChars[(character-0x20)*9+1+j] & (1<<i))
			{
				set_one_pixel(x + (7 - i), y + j);
			}
		}
	}
}

void drawString(int x, int y, char* string)
{
	for(uint16_t i = 0; i < strlen(string); i++)
	{
		drawChar(x + (i * whitespace), y, string[i]);
	}
}

void display_text(char* displayed_text)
{
	int textLen = strlen(displayed_text) * whitespace;
	if(x < -textLen)
	{
		x = 15;
	}
	x--;
	clear_buffer();
	drawString(x, y, displayed_text);
	send_display();
	HAL_Delay(slide_delay);
}

void reset_text(void)
{
	x = 2;
	y = 0;
}

void turn_off(enum BRAKE_LIGHT_Mode_t BRAKE_LIGHT_Mode, char* displayed_text)
{
	static uint32_t lastInteractiveTick = 0;
	if(BRAKE_LIGHT_Mode == BASIC_BRAKE_LIGHT)
	{
		display_off();
	}
	else if(BRAKE_LIGHT_Mode == INTERACTIVE_BRAKE_LIGHT)
	{
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

void send_display(void)
{
	HAL_GPIO_WritePin(Latch_GPIO_Port, Latch_Pin, 0);
	HAL_SPI_Transmit_DMA(&hspi1, display_buffer, sizeof(display_buffer));
	HAL_Delay(1);
	HAL_GPIO_WritePin(Latch_GPIO_Port, Latch_Pin, 1);
	HAL_Delay(1);
	HAL_GPIO_WritePin(Latch_GPIO_Port, Latch_Pin, 0);
}

void display_test_animation(void)			//used only for debug
{
	static uint8_t led = 0;
	static uint8_t column = 0;

	if((led % 8) == 0)
	{
		if(led != 0)
		{
			display_buffer[column] = 0;
			column++;
			variable = 0b10000000;
		}
	}
	display_buffer[column] = (variable >> (led % 8));
	led++;
	if(led >= 127){
		led = 0;
		column = 0;
	}
}
