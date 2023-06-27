#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * array_range- entry to function
 * @min: minimum value of array
 * @max: max value of array
 * Return: NULL on fail, or pointer to memory on success.
 */

int *array_range(int min, int max)
{
	int *minmax;
	int i, c = 0;

	if ( min > max)
		return (NULL);

	else
		c = (max - min) + 1;

	minmax = (malloc(sizeof(int) * c));

	if (minmax == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
		minmax[i] = min++;

	return (minmax);
}
