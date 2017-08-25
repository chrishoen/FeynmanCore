#include "Arduino.h"
#include <stdint.h>

#ifndef __SAMG55J19__
#error Wrong variant.h file included for SAMG55J19!
#endif

extern const PinDescription g_APinDescription[]= {
{	PIOA,	PIO_PA0,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOA,	PIO_PA1,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOA,	PIO_PA2,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOA,	PIO_PA3,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOA,	PIO_PA4,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOA,	PIO_PA5,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOA,	PIO_PA6,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOA,	PIO_PA7,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOA,	PIO_PA8,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOA,	PIO_PA9,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOA,	PIO_PA10,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOA,	PIO_PA11,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOA,	PIO_PA12,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOA,	PIO_PA13,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOA,	PIO_PA14,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOA,	PIO_PA15,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOA,	PIO_PA16,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOA,	PIO_PA17,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_ANALOG,	ADC0,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOA,	PIO_PA18,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_ANALOG,	ADC1,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOA,	PIO_PA19,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_ANALOG,	ADC2,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOA,	PIO_PA20,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_ANALOG,	ADC3,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOA,	PIO_PA21,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOA,	PIO_PA22,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOA,	PIO_PA23,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOA,	PIO_PA24,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOA,	PIO_PA25,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOA,	PIO_PA26,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOA,	PIO_PA27,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOA,	PIO_PA28,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOA,	PIO_PA29,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOA,	PIO_PA30,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOA,	PIO_PA31,	ID_PIOA,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
										
{	PIOB,	PIO_PB0,	ID_PIOB,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_ANALOG,	ADC4,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOB,	PIO_PB1,	ID_PIOB,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_ANALOG,	ADC5,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOB,	PIO_PB2,	ID_PIOB,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_ANALOG,	ADC6,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOB,	PIO_PB3,	ID_PIOB,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_ANALOG,	ADC7,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOB,	PIO_PB4,	ID_PIOB,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOB,	PIO_PB5,	ID_PIOB,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOB,	PIO_PB6,	ID_PIOB,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOB,	PIO_PB7,	ID_PIOB,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOB,	PIO_PB8,	ID_PIOB,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOB,	PIO_PB9,	ID_PIOB,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOB,	PIO_PB10,	ID_PIOB,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOB,	PIO_PB11,	ID_PIOB,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOB,	PIO_PB12,	ID_PIOB,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOB,	PIO_PB13,	ID_PIOB,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOB,	PIO_PB14,	ID_PIOB,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	},
{	PIOB,	PIO_PB15,	ID_PIOB,	PIO_OUTPUT_0,	PIO_DEFAULT,	PIN_ATTR_DIGITAL,	NO_ADC,	NOT_ON_PWM,	NOT_ON_TIMER	}

};

//#define PINS_COUNT (sizeof(g_APinDescription) / sizeof(PinDescription))
#define PINS_COUNT 48
uint8_t g_pinStatus[PINS_COUNT] = {0};
extern const uint8_t g_pincount = (sizeof(g_APinDescription) / sizeof(PinDescription));