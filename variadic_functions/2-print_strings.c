#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_strings- Function to print a number of integers and seperators
 * @separator: a charactger to be printed inbetween integers
 * @n: number of integers passed to function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(str, char) == NULL)
			printf("(nil)");

		printf("%d", va_arg(str, char));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(num);
}
