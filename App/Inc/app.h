/*
 * app.h
 *
 *  Created on: Jul 20, 2024
 *      Author: Dominik
 */

#ifndef APP_H_
#define APP_H_

#define NUM_OF_COLUMNS (14)
#define NUM_OF_ROWS (8)
#define NUM_OF_PIXELS (128)
#define INTERACTIVE_TIMEOUT (4*60*1000) //dodać *60
#define ERROR_PERIOD (300)

enum BRAKE_LIGHT_Mode_t{
	BASIC_BRAKE_LIGHT,
	INTERACTIVE_BRAKE_LIGHT,
};

enum BRAKE_LIGHT_Display_t{
	DISPLAY_OFF,
	DISPLAY_ON,
	DISPLAY_ERROR,
	DISPLAY_ANIMATION
};

int mainApp(void);

#endif /* APP_H_ */
