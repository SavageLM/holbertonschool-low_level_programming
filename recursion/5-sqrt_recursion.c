#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion- entry to function
 * @n: number to square
 * @root: numbers to check
 * Return: returns the natural square or -1
 */

int _sqrt_recursion(int n, int root)
{

	int root = 0, check = root * root;

	if (check < n)
		return (-1);

	if (check == n)
		return (root);

	return (_sqrt_recursion(n, root + 1));
}
