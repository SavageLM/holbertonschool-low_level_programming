#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always void (Success)
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

	return (void);
}
