#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 * Return: Return 0 if successful
 * @n: input to check
 */

void print_to_98(int n)
{

	if (n <= 98)
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}

	else
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

}
