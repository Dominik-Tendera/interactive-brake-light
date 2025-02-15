/*
 * display_interface.h
 *
 *  Created on: Jul 24, 2024
 *      Author: Dominik
 */

#ifndef INC_DISPLAY_INTERFACE_H_
#define INC_DISPLAY_INTERFACE_H_

#include "main.h"
#include "app.h"

#define NUM_OF_COLUMNS (14)
#define NUM_OF_ROWS (8)
#define NUM_OF_PIXELS (128)
#define INTERACTIVE_TIMEOUT (5*1000)
#define CHARACTER_WIDTH (5)
#define CHARACTER_HEIGHT (7)
#define MAX_BRIGTHNESS (1000)
#define MAX_FAN_SPEED (100)

void initialize(void);
void can_communication(enum BRAKE_LIGHT_Display_t* BRAKE_LIGHT_Display, uint8_t* fan_speed);
void set_brightness(uint16_t brightness);
void display_off(void);
void display_on(void);
void display_error(void);
void display_static_text(char* static_text);
void display_animation(char* displayed_text);
void one_pixel_on(uint8_t column, uint8_t row);
void draw_char(int16_t x, int8_t y, char character);
void draw_string(int16_t x, int8_t y, char* string);
void display_text(char* displayed_text);
void conditional_display_off(enum BRAKE_LIGHT_Mode_t BRAKE_LIGHT_Mode, char* displayed_text);
void send_display(void);

#endif /* INC_DISPLAY_INTERFACE_H_ */
