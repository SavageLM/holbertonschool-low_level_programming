#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Entry point
 * Return: Return 0 if successful
 * @n: input to check
 */

int print_last_digit(int n)
{

	int x = n % 10;

	if (n < 0)
	{
		_putchar(-x +'0');
		return (-x);
	}

	if else (n > 0)
	{

		_putchar(x + '0');
		return (x);
	}

}
