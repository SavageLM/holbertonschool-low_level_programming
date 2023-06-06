#include <stdio.h>
#include "main.h"

/**
 * print_array - entry to function
 * @a: array to be printed
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{

	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			break;
		printf(", ");
	}

	printf("\n")
}
