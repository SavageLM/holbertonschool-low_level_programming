#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * free_grid- entry to function
 * @grid: pointer to result from alloc_grid
 * @height: height of array
 */

void free_grid(int **grid, int height)
{
	free(grid);
}
