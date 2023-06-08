#include <stdio.h>
#include "main.h"

/**
 * *_strcat - entry to function
 * @dest: string to be appended
 * @src: string to append
 * Return: Returns pointer to resulting string, dest
 */

char *_strcat(char *dest, char *src)
{
	int c = 0, i = 0;

	while (dest[c] != '\0')
	{
		c++;
	}

	while (src[i] != '\0')
	{
		c++;
		i++;
	}

	dest[c] = '\0';

	return (dest);
}
