#include <stdio.h>
#include "main.h"

/**
 * swap_int - entry to function
 * @a: pointer to an int variable to be swapped
 * @b: pointer to an int variable to be swapped
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
