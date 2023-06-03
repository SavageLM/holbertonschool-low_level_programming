#include <stdio.h>
#include "main.h"

/**
 * _puts - entry to function
 * @str: string to be printed
 * Return: returns string length
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(str);
		str++;
	}

	_putchar('\n');
}
