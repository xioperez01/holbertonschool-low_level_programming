#ifndef PROTOTYPES_H
#define PROTOTYPES_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/* functions prints */

void op_c(va_list p);
void op_i(va_list p);
void op_f(va_list p);
void op_s(va_list p);

/* structure */

typedef struct initial
{
	char *ar;
	void (*f)(va_list p);
} formats_t;

#endif
