#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * sum_them_all- function to add all parameters
 * @n: number of parameters
 * Return: returns the summ
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(nums, n);

	for (i = 0; i < n; i++)
		sum += va_arg(num, int);

	va_end(num);

	return (sum);
}
