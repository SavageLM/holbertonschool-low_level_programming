#include <stdio.h>
#include "main.h"

/**
 * *_strncat - entry to function
 * @dest: string to be appended
 * @src: string to append
 * @n: number of bytes to use
 * Return: Returns pointer to resulting string, dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c = 0, i = 0;

	while (dest[c] != '\0')
	{
		c++;
	}

	while (src[i] != '\0' && i < n)
	{
		dest[c] = src[i];
		c++;
		i++;
	}

	return (dest);
}
