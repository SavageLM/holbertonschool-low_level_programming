#include <stdio.h>
#include "main.h"

/**
 * sqroot_check- entry to function
 * @n: number to square
 * @root: numbers to check
 * Return: returns the natural square or -1
 */

int sqroot_check(int n, int root)
{

	int check = root * root;

	if (check < n)
		return (-1);

	if (check == n)
		return (root);

	return (_sqrt_recursion(n, root + 1));

}

/**
 * _sqrt_recursion- entry to function
 * @n: number to square
 * Return: returns the natural square or -1
 */

int _sqrt_recursion(int n)
{
	return (sqroot_check(n, 1));
}
