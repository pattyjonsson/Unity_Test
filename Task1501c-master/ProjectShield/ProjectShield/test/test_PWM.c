/*
 * test_PWM.c
 *
 * Created: 2016-05-10 13:13:53
 *  Author: Spellabbet
 */ 
#include "test_PWM.h"
#include "../src/PWMFunctions.h"
#include "../unity/unity.h"

uint32_t *const p_PWM_CHSR = (uint32_t *)0x4009400CU;
uint32_t *const p_PMC_PCSR1 = (uint32_t *) 0x400E0708U;

void testPWMInitialisesProperly(void){
	PWMInit();
	InitPIN40();
	InitPIN38();
	TEST_ASSERT_BIT_HIGH_MESSAGE(4, *p_PMC_PCSR1, "PMC has not enabled the peripheral PWM clock");	/* Asserting the PMC manager has activated the PWM clock */
	TEST_ASSERT_BIT_HIGH_MESSAGE(3, *p_PWM_CHSR, "PWM channel 3 is not enabled");	/* Asserting that PWM channel 3 is enabled */
	TEST_ASSERT_BIT_HIGH_MESSAGE(2, *p_PWM_CHSR, "PWM channel 2 is not enabled");	/* Asserting that PWM channel 2 is enabled */
	
}
