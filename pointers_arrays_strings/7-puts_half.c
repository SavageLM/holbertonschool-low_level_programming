#include <stdio.h>
#include "main.h"

/**
 * puts_half - entry to function
 * @str: string to be printed
 */

void puts2(char *str)
{

	int c = 0, i = 0, n;

	while (str[i++])
	{
		c++;
	}

	if ((c % 2) == 0)

		n = c / 2;

	else
		n = (c + 1) / 2;

	for (i = n; i < c; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
