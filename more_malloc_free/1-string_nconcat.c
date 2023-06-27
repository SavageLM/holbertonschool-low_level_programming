#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat- entry to function
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 * Return: returns pointer on success and NULL on fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nconcat;
	unsigned int i, j, len1 = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for ( i = 0; s1[i]; i++)
		len1 ++

	nconcat = malloc(sizeof(char) * (len1 + 1));

	if (nconcat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		nconcat[j++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		nconcat[j++] = s2[i];

	nconcat[j] = '\0';

	return (nconcat);
}
