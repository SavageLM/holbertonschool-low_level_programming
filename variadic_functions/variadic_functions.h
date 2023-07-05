#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

typedef struct checker
{
	char *type;
	void (*print)(va_list arg, char *separator);
}checker_t;

void print_char(va_list arg, char *separator);
void print_int(va_list arg, char *separator);
void print_float(va_list arg, char *separator);
void print_string(va_list arg, char *separator);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
