#ifndef TMP36_H_
#define TMP36_H_

#include "main.h"
#include "serial.h"
#include "adc.h"

typedef struct
{
	adc_t input;

} tmp36_t;



static inline double tmp36_room_temp(tmp36_t* self) // Beräknar temperaturen i rummet
{
	const double voltage_in = adc_read(&self->input) / 1023.0 * 5.0;
	return 100 * voltage_in - 50;
}


static inline void tmp36_init(tmp36_t* self,const uint8_t pin) // Hur stor överförings hastighet är och i vilken pin tempen är 
{
	adc_init(&self->input, pin);
	serial_init(9600);
	return;
}



static inline void tmp36_temp_print(tmp36_t* self) // Utskrivs i seriell monitorn
{
	serial_print_string("Temperature: ");
	serial_print_double(tmp36_room_temp(self));
	serial_print_string("° Celcius\n");
}
#endif /* TMP36_H_ */