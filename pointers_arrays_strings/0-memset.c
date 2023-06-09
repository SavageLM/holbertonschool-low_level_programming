#include <stdio.h>
#include "main.h"

/**
 * *_memset - entry to function
 * @s: memory address
 * @n: number of bytes to be used
 * @b: constant byte
 * Return: Returns pointer to resulting string, dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while ( i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
