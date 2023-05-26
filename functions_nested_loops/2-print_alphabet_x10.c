#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 *
 */

void print_alphabet_x10(void)
{
	int x = 1;

	while (x < 11);
	{
		char alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		
	_putchar('\n');
	x++;
		

	}

}
