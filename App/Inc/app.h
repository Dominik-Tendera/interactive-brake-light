/*
 * app.h
 *
 *  Created on: Jul 20, 2024
 *      Author: Dominik
 */

#ifndef APP_H_
#define APP_H_

#define NUM_OF_COLUMNS (14)
#define NUM_OF_ROW (8)
#define NUM_OF_PIXELS (128)

enum BRAKE_LIGHT_Mode_t{
	BRAKE_LIGHT,
	INTERACTIVE_LIGHT,
	FAN_SPEED,
	TIMEOUT,
	ERROR		//WYSYŁANE PROBLEMY Z LEDMANI>
};

int mainApp(void);


#endif /* APP_H_ */
