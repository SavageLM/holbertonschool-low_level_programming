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
	int i, j = 0;
	unsigned int len1, len2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2) + 1;

	concat = malloc(sizeof(char) * (len1 + len2));

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat[j++] = s2[i];

	concat[j] = '\0';

	return (concat);
}
