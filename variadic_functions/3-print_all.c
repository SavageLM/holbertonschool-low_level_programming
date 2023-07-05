#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_char- prints a character
 * @arg: list of arguments pointing to character to print
 */

void print_char(va_list arg, char *separator)
{
	char let;

	let = va_arg(arg, int);
	printf("%c%s", let, separator);
}

/**
 * print_int- prints an integer
 * @arg: list of arguments pointing to integer to print
 */

void print_int(va_list arg, char *separator)
{
	int num;

	num = va_arg(arg, int);
	printf("%d%s", num, separator);
}

/**
 * print_float- prints a float
 * @arg: list of arguments pointing to float to print
 */

void print_float(va_list arg, char *separator)
{
	float point;

	point = va_arg(arg, int);
	printf("%f%s", point, separator);
}

/**
 * print_string- prints a string
 * @arg: list of arguments pointing to string to print
 */

void print_string(va_list arg, char *separator)
{
	char *str;

	str = va_arg(arg, char*);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s%s", str, separator);
}

/**
 * print_all- prints anything
 * @format: arguement types
 * @...: variable number of arguments
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0;
	char *separator = "";
	checker_t functions[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while ((format != NULL) && (format[i] != NULL))
	{
		j = 0;

		while (j < 4)
		{
			if (format[i] == functions[j].type)
			{	
				functions[j].print(args, separator);
				separator = ", ";
			}

			j++
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
