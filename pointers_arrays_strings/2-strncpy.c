#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - entry to function
 * @dest: copied string
 * @src: string to be copied
 * @n: number
 * Return: destination of copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];

		if (i > n)

			break;
		i++;
	}

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
