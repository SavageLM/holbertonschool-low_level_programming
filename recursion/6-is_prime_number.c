#include <stdio.h>
#include "main.h"

/**
 * checkem- entry to function
 * @n: number to enter
 * @check: value to check
 * Return: 1 if prime, 0 if not
 */

int checkem(int n, int check)
{

	if (n % check == 0)
		return (0);

	if (check == n / 2)
		return (1);

	return (checkem(n, check + 1));
}

/**
 * is_prime_number- entry to function
 * @n: Variable to check
 * Return: returns 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	if (n == 2)
		return (1);

	return (checkem(n, 1));
}
