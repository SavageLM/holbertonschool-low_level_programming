#include <stdio.h>
#include "main.h"

/**
 * more_numbers - entry point to function
 *
 *
 *
 */

void more_numbers(void)
{
	int x = 1;

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
