# Interactive Brake Light for Formula Student car
### August 2024

I developed a prototype electronic stop light for the AGH Racing team’s electric race car, intended for an international Formula Student competition. The project involved designing a reliable, waterproof, and bright device that meets regulatory requirements and incorporates interactive functionality for animations and text display, using CAN bus communication at 1 Mbit/s speed. Code also sets the speed of fans used to cool down the accumulator container.

This work is written on STM32F103C8T6TR, microcontroller handles CAN communication and drives the display. Code has two states to chose from "basic" - used for competition and "interactive"
 
to change brake light behaviour to be fully compliant with FSG rules, set 'BRAKE_LIGHT_Mode = BASIC_BRAKE_LIGHT;'

### CAN:
After sending can message with ID 0x526, PERIOD 100ms, DLC 1, with "value" the display will change acordingly:

value:

    0 = DISPLAY_OFF
	1 = DISPLAY_ON
	2 = DISPLAY_ERROR
    3 = DISPLAY_ANIMATION

You can also set Fan speed by sending values in % with ID 0x6, DLC 2 - bit[0] = absolute value, bit[1] = increase/decrease value

Actual fan speed is sent periodically in % with ID 0x1c, PERIOD 1000ms, DLC 1

### INTERACTIVE_Mode:
When light display changes from any other state to DISPLAY_OFF,  constant time 'INTERACTIVE_TIMEOUT' is counted after which the sliding text will show up.
Practically with TIMEOUT set for few minutes, this mode can work as BASIC_LIGHT while driving.
DISPLAY_ON and DISPLAY_ERROR works the same as in BASIC_LIGHT.
Special font was implemented to the project so that there is a possibility to write any text in ASCII characters. 

This work significantly enhanced the car’s visibility, functionality, and marketing appeal while adhering to the strict demands of Formula Student. Additionally, it features an option to inform the team about specific errors by displaying them using an implemented font.
