#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion- entry to funtcion
 * @x: interget to raised
 * @y: exponent power
 * Return: value of x rasied to y
 */

int _pow_recursion(int x, int y)
{
	int exp = x;

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);
	
	exp *= _pow_recursion(x, y -1);

	return (exp);
}
