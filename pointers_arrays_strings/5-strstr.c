#include <stdio.h>
#include "main.h"

/**
 * *_strstr - entry to function
 * @haystack: string
 * @needle: substring to search for
 * Return: address of beginning of substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, c = 0;

	if (needle[i] =='\0')
		return (haystack[c]);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			j++;

			if (c == 0)
				c = i;
			if needle[j] == '\0'
				return (&haystack[c]);
		}

		else
		{
			j = 0;
			c = 0;
		}

	}

	return (NULL);
}
