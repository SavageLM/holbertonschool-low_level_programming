#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - entry point to function
 *
 *
 *
 */

void print_most_numbers(void)
{
	int x; 

	while (x < 11)
	{
		int i;

		for (i = 0; i < 15; i++)
		{
			_putchar(i + '0');
		}
	}

	_putchar('\n');
	x++;
}
