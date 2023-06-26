#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc- entry to function
 * @nmemb: number of elements
 * @size: number of bytes
 * Return: NULL on fail or pointer to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *call;
	unsigned int i;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	call = malloc(size * nmemb);

	if ( call == NULL)
		return (NULL);

	for (i = 0; i < (size *nmemb); i++)
		mem[i] = 0;

	return (mem);
}
