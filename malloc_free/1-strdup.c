#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup- entry to function
 * @str: str to copy
 * Return: returns pointer to new string memory or NULL on failure.
 */

char *_strdup(char *str)
{
	char *copy;
	int i;

	if (str == NULL)
		return (NULL);

	copy = malloc(sizeof(char) * strlen(str));

	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];

	return (copy);
}
