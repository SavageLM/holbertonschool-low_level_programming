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
	int x = 0;

	while (x <= 9)
	{
		int i;

		for (i = 0; i <= 14; i++)
		{
			if (i > 9)

				_putchar((i / 10) + '0');

			_putchar((i % 10) + '0');
		}



		_putchar('\n');
		x++;
	}
}
