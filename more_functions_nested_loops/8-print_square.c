#include <stdio.h>
#include "main.h"

/**
 * print_square - entry point to function
 * @size: Number of times to print "#"
 *
 *
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');

	else
	{
		int x = 1, row;

		while (x <= size)
		{
			for (row = 1; row <= size; row++)
			{
				_putchar('#');
			}

		_putchar('\n');
		x++;
		}
	}
}
