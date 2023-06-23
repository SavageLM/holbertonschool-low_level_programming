#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * alloc_grid- entry to function
 * @width: colums of the array
 * @height: Rows of the array
 * Return: Pointer to array memory, or NULL on fail
 */

int **alloc_grid(int width, int height)
{
	int *multarr;
	int i, j, size = 0;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	for (i = 0; i < width; i++)
		size++;

	for (i = 0; i < height; i++)
		size++;

	multarr = malloc(sizeof(int) * size);

	if (multarr == NULL)
		return (NULL);

	for ( i = 0; i < height; i++)
	{
		for (j = 0; j < witdth; j++)
			multarr[i][j] = 0;
	}

	return (multarr);
