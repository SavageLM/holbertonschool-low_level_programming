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

		for (i = 0; i < 10; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0')
			_putchar((i % 10) + '0');
		}

	}

	_putchar('\n');
	x++;
}
