/*
 * app.c
 *
 *  Created on: Jul 20, 2024
 *      Author: Dominik
 */
#include "main.h"
#include "gpio.h"
#include "app.h"
#include "spi.h"
#include "tim.h"

extern const char fontChars[];
char text[] = "AGH Racing RTE 3.0 \"NEMO\" Ni Ma XD 8===D";
int16_t x, y, whitespace = 6;
uint32_t _delay = 20;
//uint8_t display_matrix[8][14];		wirtualna tablica nieużywana
uint8_t display_buffer[NUM_OF_COLUMNS];
uint16_t brightness = 900;
uint8_t variable = 0b10000000; 			//debugowe

void display_off(void){
	for(size_t index = 0; index < NUM_OF_COLUMNS; index++){
		display_buffer[index] = 0b00000000;
	}
}

void display_on(void){
	for(size_t index = 0; index < NUM_OF_COLUMNS; index++){
		display_buffer[index] = 0b11111111;
	}
}

void display_test(void){
	for(size_t index = 0; index < NUM_OF_COLUMNS; index++){
		for(size_t row = 0; row < NUM_OF_ROW; row++){
			display_buffer[index] = (variable >> 1);
		}
		variable = 0b10000000;
	}
}

void one_pixel_on(uint8_t pixel){
	uint8_t column = 0;
	uint8_t row = 0;

	column = pixel / 8;
	row = pixel % 8;
	display_off();
	display_buffer[column] = (0b00000001 << row);
}

void one_pixel_on_cor(uint8_t column, uint8_t row){
//	display_off();
	display_buffer[column] |= (0b00000001 << row);
}

void display_animation(void){
	static uint8_t led = 0;
	static uint8_t column = 0;
	if((led % 8) == 0){
		if(led != 0){
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

void drawChar(int x, int y, char character)
{
	for(uint8_t j = 0;j<7;j++)
	{
		for(uint8_t i = 0; i<8; i++)
		{
			if(fontChars[(character-0x20)*9+1+j] & (1<<i))
			{
				if(x >= 14 || x < -8) x=14;
				one_pixel_on_cor(x+(7-i), y+j);
			}
		}
	}
}
void drawString(int x, int y, char* string)
{
	for(uint16_t i = 0; i<strlen(string);i++)
	{
		drawChar(x+(i*whitespace), y, string[i]);
	}
}
int mainApp(void){

	HAL_TIM_Base_Start(&htim3);
	HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_4);

	while (1)
	{
		uint8_t once = 0;
		if(once == 0){
			once++;
		}
		//display_off();
		//display_on();
		//display_test();
		//display_animation();

//		one_pixel_on_cor(x,y);
		int textLen = strlen(text) * 8;
		if(x< -textLen)x=15;
		x--;
		display_off();
		drawString(x, y, text);
		HAL_GPIO_WritePin(Latch_GPIO_Port, Latch_Pin, 0);
		HAL_SPI_Transmit_DMA(&hspi1, display_buffer, sizeof(display_buffer));
		HAL_Delay(5);
		HAL_GPIO_WritePin(Latch_GPIO_Port, Latch_Pin, 1);
		HAL_Delay(5);
		HAL_GPIO_WritePin(Latch_GPIO_Port, Latch_Pin, 0);
		__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_4, brightness);
		HAL_Delay(_delay);
	}
	return 0;
}
