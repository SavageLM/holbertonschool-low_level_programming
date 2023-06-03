#include <stdio.h>
#include "main.h"

/**
 * rev_string - entry to function
 * @s: string to be printed
 * Return: returns string length
 */

void rev_string(char *s)
{

	int c = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		c++;
	}

	for (i = c - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
