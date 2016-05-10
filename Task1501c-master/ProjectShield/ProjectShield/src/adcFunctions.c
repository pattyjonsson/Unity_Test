/*
 * adcFunctions.c
 *
 * Created: 2015-06-16 09:00:18
 *  Author: To Be Decided
 */ 

#include <inttypes.h>
#include <asf.h>
#include "adcFunctions.h"

int analogInit(int pinNumber)
{
	/* 
	 * The pin number is the analog input pin on the DUe board, see http://www.arduino.cc/en/Hacking/PinMappingSAM3X
	 * Obviously it starts at analog 0 which is equivalent to the analog input on PA16
	 * so you need to figure out which AD channel this corresponds to
	 *
	 * See code example http://asf.atmel.com/docs/latest/sam.drivers.adc.adc_example.arduino_due_x/html/sam_adc_quickstart.html
	 * It is assumed that the AD-converter is using 12 bits
	 */
	
	pmc_enable_periph_clk(ID_ADC);	/* power the clock for the ADC with pmc_enable_periph_clk(ID_ADC) */
	
	/* Write code here */
	
	return 0;	/* if everything is ok */
}

uint32_t analogRead(int pinNumber)
{
	/* Write code here */

	return 0;	/* Replace with actual value read from A/D input*/
}