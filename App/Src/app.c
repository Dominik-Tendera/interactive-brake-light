/*
 * app.c
 *
 *  Created on: Jul 20, 2024
 *      Author: Dominik
 */
#include "main.h"
#include "gpio.h"
#include "app.h"


uint8_t display[14];

SPI_HandleTypeDef hspi1;
DMA_HandleTypeDef hdma_spi1_tx;

void display_init(void){
	for(size_t index; index < 14; index++){
		display[index] = 0b00000000;
	}
}

void set_whole_display(void){
	for(size_t index; index < 14; index++){
		display[index] = 0b11111111;
	}
}

int mainApp(void){
	while (1)
	{
		HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);			//logika do ogarnięcia
		HAL_Delay(500);

		set_whole_display();
		HAL_GPIO_WritePin(Latch_GPIO_Port, Latch_Pin, 0);
		HAL_GPIO_WritePin(OutEnable_GPIO_Port, OutEnable_Pin, 0);

		HAL_SPI_Transmit_DMA(&hspi1, display, sizeof(display));
		HAL_GPIO_WritePin(Latch_GPIO_Port, Latch_Pin, 1);
		HAL_Delay(500);

		HAL_GPIO_WritePin(Latch_GPIO_Port, Latch_Pin, 0);
		HAL_GPIO_WritePin(OutEnable_GPIO_Port, OutEnable_Pin, 0);

	}
	return 0;
}
