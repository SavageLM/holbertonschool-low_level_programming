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
	int **multarr;
	int i, j;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	multarr = malloc(sizeof(int) * width * height);

	if (multarr == NULL)
		return (NULL);

	for ( i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			multarr[i][j] = 0;
	}

	return (multarr);
}
