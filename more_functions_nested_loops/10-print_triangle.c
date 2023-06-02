#include <stdio.h>
#include "main.h"

/**
 * print_triangle - entry point to function
 * @size: size of triangle
 *
 *
 */

void print_triangle(int size)
{
	int hash, index;

	if (size > 0)
	{
		for (hash = 1; hash < size; hash++)
		{
			for (index = size - hash; index > 0; index--)

				_putchar(' ');

			for (index = 0; index < hash; index++)

				_putchar('#');


			if (line == n - 1)
				break;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
