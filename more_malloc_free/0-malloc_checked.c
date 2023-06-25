#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * malloc_checked- entry to function
 * @b: number of int bytes to be allocated
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(sizeof(unsigned int) * b);

	if (mem == NULL)
		exit (98);

	return (mem);
}
