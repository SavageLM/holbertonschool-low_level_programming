#include <stdio.h>
#include "main.h"

/**
 * _isdigit - entry point to function
 * Return: returns 1 if a digit, 0 if not
 * @c: input to check
 */

int _isdigit(int c)
{
	if ((c > 47) && (c < 58))
		return (1);
	else
		return (0);
}
