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

	for (i = 0; src[i] != '\0' && src[i] < n; i++)

		dest[i] = src[i];

	return (dest);
}
