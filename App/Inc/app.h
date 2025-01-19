/*
 * app.h
 *
 *  Created on: Jul 20, 2024
 *      Author: Dominik
 */

#ifndef APP_H_
#define APP_H_

enum BRAKE_LIGHT_Mode_t{
	BASIC_BRAKE_LIGHT,
	INTERACTIVE_BRAKE_LIGHT,
};

enum BRAKE_LIGHT_Display_t{
	DISPLAY_OFF = 0,
	DISPLAY_ON = 1,
	DISPLAY_ERROR = 2,
	DISPLAY_ANIMATION = 3
};

int mainApp(void);

#endif /* APP_H_ */
