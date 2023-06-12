#include <stdio.h>
#include "main.h"

/**
 * _strspn - entry to function
 * @s: string
 * @accept: number of bytes from s
 * Return: Returns number of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				c++;
			if (accept[j] == '\0')
				return (c);
		}

	}

	return (c);
}
