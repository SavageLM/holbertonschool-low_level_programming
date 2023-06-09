#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - entry to function
 * @a: Array to check
 * @size: size of given array
 */

void print_diagsums(int *a, int size)
{
	int i, res1 = 0, res2 = 0;

	for (i = 0; i < size; i++)
	{
		res1 += a[(size + 1) * i];
		res2 += a[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", res1, res2);
}
