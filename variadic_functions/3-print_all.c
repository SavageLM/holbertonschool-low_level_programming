#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_char- prints a character
 * @arg: list of arguments pointing to character to print
 */

void print_char(va_list arg)
{
	char let;

	let = va_arg(arg, int);
	printf("%c", let);
}

/**
 * print_int- prints an integer
 * @arg: list of arguments pointing to integer to print
 */

void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float- prints a float
 * @arg: list of arguments pointing to float to print
 */

void print_float(va_list arg)
{
	float point;

	point = va_arg(arg, int);
	printf("%f", point);
}

/**
 * print_string- prints a string
 * @arg: list of arguments pointing to string to print
 */

void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char*);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all- prints anything
 * @format: arguement types
 * @...: variable number of arguments
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	checker_t functions[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(functions[j].type)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			functions[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
