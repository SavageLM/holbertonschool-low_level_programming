#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion- entrance to the function
 * @s: String to be printed
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s+1);
	}

	else
		_putchar('\n');
}
