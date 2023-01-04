#ifndef SERIAL_H_
#define SERIAL_H_

#include "main.h"


/*
överföring hastighet
*/
void serial_init(const uint32_t baud_rate_kbps);

/*
Ett tecken till terminalen skrivs ut 
*/
void serial_print_char(const char c);

/*
S pekare till text stycket som skriver ut hela ord
*/
void serial_print_string(const char* s);

/*
Positiva tal skrivs ut
*/
void serial_print_unsigned(const uint32_t number);

/*
Heltal skrivs ut
*/
void serial_print_integer(const int32_t number);

/*
Ett flyttal skrivs till terminalen
*/
void serial_print_double(const double number);
#endif /* SERIAL_H_ */