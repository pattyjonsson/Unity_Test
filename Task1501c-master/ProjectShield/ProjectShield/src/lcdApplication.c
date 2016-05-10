/*
 * lcdApplication.c
 *
 * Created: 2015-09-10 08:44:50
 *  Author: To Be Decided
 */ 

#include "lcdApplication.h"
#include "buttons.h"	/* to get the buttontype definiton */

int lcdWrite4DigitNumber(int number)
{
	/* Write code here */
	
	return 0;	/* Assuming everything went ok */
}

int lcdWriteAsciiString(const char *string)
/* writes an ascii string up to 40 characters on the LCD display */
{
	/* Write code here */
	
	return 0;	/* Assuming everything went ok */
}

int lcdWriteButtonValue(buttonType inputButton)
/* Writes the text corresponding to one of the buttosn on the LCD dispaly using lcdWriteAsciiString() 
 * Output should be one of SELECT, LEFT, UP, DOWN, RIGHT on the LCD display
 * if no buttons is pushed you can chose on displaying nothing or NONE  */
{
	/* Write code here */
	
	return 0;	/* Assuming everything went ok */
}