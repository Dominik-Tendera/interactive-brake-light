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

void set_brightness(uint16_t);
void clear_buffer(void);
void display_off(void);
void display_on(void);
void one_pixel_on(uint8_t column, uint8_t row);
void display_test_animation(void);
void drawChar(int x, int y, char character);
void drawString(int x, int y, char* string);
void display_text(char* displayed_text);
void reset_text(void);
void turn_off(enum BRAKE_LIGHT_Mode_t BRAKE_LIGHT_Mode, char* displayed_text);
void send_display(void);

#endif /* INC_DISPLAY_INTERFACE_H_ */
