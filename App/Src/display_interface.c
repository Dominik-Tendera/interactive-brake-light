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
uint8_t whitespace = 4;
uint32_t slide_delay = 40;
extern uint8_t timeout_flag;
extern uint8_t display_change;

void set_brightness(uint16_t value)
{
	__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_4, MAX_BRIGTHNESS - value);						//negation logic (brithness sets from 0 - OFF to 1000 - FULL)
}

void set_buffer(uint8_t value)
{
	for(size_t index = 0; index < NUM_OF_COLUMNS; index++)
	{
		display_buffer[index] = value;
	}
}

void display_off(void)
{
	set_buffer(0b00000000);
	send_display();
}

void display_on(void){
	set_buffer(0b11111111);
	send_display();
}

void display_error(void)
{
	set_buffer(0b00000000);
	draw_string(1, 0, "Er");
	send_display();
}

void set_one_pixel(uint8_t column, uint8_t row)
{
	if(row >= 0 && row < NUM_OF_ROWS && column >= 0 && column < NUM_OF_COLUMNS){			//this statement writes only the values that should be displayed
		display_buffer[NUM_OF_COLUMNS - column - 1] |= (1 << (NUM_OF_ROWS - row - 1));		// CZY MOGA BYC MAGIC NUMBER  1
	}
}

void draw_char(int x, int y, char character)
{
	for(uint8_t font_row = 0; font_row < CHARACTER_HEIGHT; font_row++)
	{
		for(uint8_t font_column = 0; font_column < CHARACTER_WIDTH; font_column++)
		{
			if(fontChars[(character - 0x20) * CHARACTER_HEIGHT + font_row] & (1<<(font_column + 8 - CHARACTER_WIDTH)))		//CZY MOZNA UZYC 8 JAKO MAGIC NUMBER CZY DODAC NA PRZYKLAD MAKRO BYTE albo sizeof() * 8
			{
				set_one_pixel(x + (CHARACTER_WIDTH - 1 - font_column), y + font_row);
			}
		}
	}
}

void draw_string(int x, int y, char* string)
{
	for(int32_t character_index = 0; character_index < strlen(string); character_index++)
	{
		draw_char(x + (character_index * (CHARACTER_WIDTH + whitespace)), y, string[character_index]);
	}
}

void display_text(char* displayed_text)
{
	int32_t text_length = (int16_t)strlen(displayed_text) * (CHARACTER_WIDTH + whitespace);
	if(x < (-text_length))																	//this slides text thorugh the display
	{
		x = NUM_OF_COLUMNS + 1;
	}
	x--;
	set_buffer(0b00000000);
	draw_string(x, y, displayed_text);
	send_display();
	HAL_Delay(slide_delay);										//USUNAC HALL_DELAY
}

void reset_coordinates(void)
{
	x = 2;
	y = 0;
}

void conditional_display_off(enum BRAKE_LIGHT_Mode_t BRAKE_LIGHT_Mode, char* displayed_text)			//CZY TE WARUNKI DOTYCZĄCE STANU POWINIENEM ZOSTAWIĆ W APP.C, żeby był tam widoczny warunek na podstawowe światło?
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
			reset_coordinates();
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
	HAL_Delay(1);																//POZBYC SIE TYCH DELAYOW
	HAL_GPIO_WritePin(Latch_GPIO_Port, Latch_Pin, 1);
	HAL_Delay(1);
	HAL_GPIO_WritePin(Latch_GPIO_Port, Latch_Pin, 0);
}

//DEBUG ANIMATION TO LIGHt ONE LED AFTER THE OTHER
//
//uint8_t variable = 0b10000000;
//
//void display_test_animation(void)
//{
//	static uint8_t led = 0;
//	static uint8_t column = 0;
//
//	if((led % 8) == 0)
//	{
//		if(led != 0)
//		{
//			display_buffer[column] = 0;
//			column++;
//			variable = 0b10000000;
//		}
//	}
//	display_buffer[column] = (variable >> (led % 8));
//	led++;
//	if(led >= 127){
//		led = 0;
//		column = 0;
//	}
//}
