#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * op_add- function to add two integers
 * @a: an integer
 * @b: an integer
 * Return: returns result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub- function to subtract two integers
 * @a: an integer
 * @b: an integer
 * Return: returns result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- function to multiply two integers
 * @a: an integer
 * @b: an integer
 * Return: returns result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- function to divide two integers
 * @a: an integer
 * @b: an integer
 * Return: returns result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod- function to get remainder of two integers
 * @a: an integer
 * @b: an integer
 * Return: returns result
 */

int op_mod(int a, int b)
{
	return (a % b);
}
