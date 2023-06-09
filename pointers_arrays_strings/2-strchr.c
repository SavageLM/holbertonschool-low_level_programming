#include <stdio.h>
#include "main.h"

/**
 * *_strchr - entry to function
 * @s: string
 * @c: Character to search for
 * Return: Returns pointer to first occurence of C, or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('i');
}
