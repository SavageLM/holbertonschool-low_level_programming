#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup- entry to function
 * @str: str to copy
 * Return: returns pointer to new string memory or NULL on failure.
 */

char *_strdup(char *str)
{
	char *copy;
	int i, j;

	if (str == NULL)
		return (NULL);

	j = strlen(str);

	copy = malloc(sizeof(char) * j + 1);

	if (copy == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];

	return (copy);
}
