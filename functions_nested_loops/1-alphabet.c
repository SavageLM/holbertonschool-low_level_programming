#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 *
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	{
		_putchar('\n');
	}

}
