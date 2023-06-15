#include <stdio.h>
#include "main.h"

/**
 * factorial- entrance to the function
 * @n: factorial to calculate
 * Return: returns factorial of n
 */

int factorial(int n)
{
	int fact = n;

	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	if (n > 0)
		fact *= factorial(n - 1);

	return (fact);
}
