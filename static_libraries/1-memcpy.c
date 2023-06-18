#include <stdio.h>
#include "main.h"

/**
 * *_memcpy - entry to function
 * @src: memory area to copy
 * @n: number of bytes to be copied
 * @dest:  copied memory
 * Return: Returns pointer to resulting string, dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
