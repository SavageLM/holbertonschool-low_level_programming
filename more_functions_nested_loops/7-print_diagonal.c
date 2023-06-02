#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - entry point to function
 * @n: Number of \ characters
 *
 *
 */

void print_diagonal(int n)
{
	int line, space;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (space = 0; space < line; space++)

				_putchar(' ');

			_putchar('\\');

			if (line == n - 1)
				break;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
