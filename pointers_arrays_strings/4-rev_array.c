#include <stdio.h>
#include "main.h"

/**
 * reverse_array - entry to function
 * @a: array to be reversed
 * @n: number of elements of array
 */

void reverse_array(int *a, int n)
{
	int temp, i, b = 0;

	for (i = n - 1; i >= 0; i--)
	{
		temp = a[b];
		a[b] = a[i];
		a[b] = temp;
	}

	b++;

}
