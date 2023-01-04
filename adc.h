#include "main.h"

#ifndef ADC_H_
#define ADC_H_

typedef struct
{
	uint8_t pin;
	uint16_t adc_on_us;
	uint16_t adc_off_us;

} adc_t;

double adc_duty_cycle(adc_t* self); // Ber�knar den utg�ende str�m

uint16_t adc_read(adc_t* self); // Anger adc Pin

void adc_init(adc_t* self, const uint8_t pin); // Vad som self pekar p� vid defenition

void adc_get_values(adc_t* self, const uint16_t period_us); // F�r att sp�nningen ska st�mma, ber�knas det hur l�nge den ska vara p� och av 

#endif /* ADC_H_ */