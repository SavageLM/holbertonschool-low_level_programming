#include <stdio.h>
#include "main.h"

/**
 * print_sign - Entry point
 * Return: Return 0 if successful
 * @n: input to check
 */

int print_sign(int n)
{

	if (n > 48)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 48)
	{
		return (0);
		_putchar(48);
	}
	else if (n < 48)
	{
		_putchar(45);
		return (1);
	}

	return (0);

}
