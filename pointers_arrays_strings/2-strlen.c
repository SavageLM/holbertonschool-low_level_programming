#include <stdio.h>
#include "main.h"

/**
 * _strlen - entry to function
 * @s: string to be counted
 * Return: returns string length
 */

int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		*s++;
	}

	return (len);
}
