#include <stdio.h>
#include "main.h"

/**
 * print_line - entry point to function
 * @n: Number of times to print "_"
 *
 *
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');

	else
	{
		int x = 1;

		while (x <= n)
		{
			_putchar('_');
			x++;
		}

		_putchar('\n');
	}
}
