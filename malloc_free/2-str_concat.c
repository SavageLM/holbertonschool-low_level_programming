#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat- entry to function
 * @s1: first string
 * @s2: string to concatenate on s1
 * Return: returns pointer to concatenated string, or NULL on fail
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int count, i, j, c;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s2[c])
		c++;

	while (s1[i])
	{
		s2[c] = s1[i];
		c++;
		i++;
	}

	s2[c] = '\0';

	count = c + i;

	concat = malloc((sizeof(char) * count) + 1);

	if (concat == NULL)
		return (NULL);

	for (j = 0; s2[j] != '\0'; j++)
		concat[j] = s2[j];

	return (concat);
}
