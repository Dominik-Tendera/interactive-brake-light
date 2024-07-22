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

uint8_t display_matrix[NUM_OF_COLUMNS];
uint8_t display_buffer[NUM_OF_COLUMNS];
uint16_t brightness = 500;

//extern SPI_HandleTypeDef hspi1;
//extern DMA_HandleTypeDef hdma_spi1_tx;

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

int mainApp(void){

	HAL_TIM_Base_Start(&htim3);
	HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_4);
	while (1)
	{
		uint8_t once = 0;
		if(once == 0){
			once++;
			display_on();
			HAL_GPIO_WritePin(Latch_GPIO_Port, Latch_Pin, 0);
			HAL_SPI_Transmit_DMA(&hspi1, display_buffer, sizeof(display_buffer));
			HAL_Delay(5);
			HAL_GPIO_WritePin(Latch_GPIO_Port, Latch_Pin, 1);
			HAL_Delay(5);
			HAL_GPIO_WritePin(Latch_GPIO_Port, Latch_Pin, 0);

		}
		__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_4, brightness);
	}
	return 0;
}
