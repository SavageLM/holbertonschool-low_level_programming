#include <stdio.h>
#include "main.h"

/**
 * *_strpbrk - entry to function
 * @s: string
 * @accept: number of bytes from s
 * Return: Returns number of bytes from accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}

	}

	return (NULL);
}
