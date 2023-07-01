#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_numbers- Function to print a number of integers and seperators
 * @separator: a charactger to be printed inbetween integers
 * @n: number of integers passed to function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(num);
}
