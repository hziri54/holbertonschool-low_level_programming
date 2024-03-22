#ifndef MAIN
#define MAIN

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/*
 * struct printer - new struct defin print
 * @t: type.
 *
 * @print: print function pointer.
 */
typedef struct printer
{
	char *t;
	void (*print)(va_list list);
} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
