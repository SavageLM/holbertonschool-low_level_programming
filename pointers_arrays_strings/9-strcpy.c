#include <stdio.h>
#include "main.h"

/**
 * _strcpy - entry to function
 * @src: array to be copied
 * @dest: array destination
 * Return: pointer to destination of copied array
 */

char *_strcpy(char *dest, char *src)
{

	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
