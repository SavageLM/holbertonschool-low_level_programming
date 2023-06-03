#include <stdio.h>
#include "main.h"

/**
 * int_strlen - entry to function
 * @s: string to be counted
 * Return: returns string length
 */

int _strlen(char *s)
{
	int len;

	while (*s++)
	{
		len++;
	}

	return len;
}
