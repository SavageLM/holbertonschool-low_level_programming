#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion- entry to function
 * @s: string to count
 * Return: returns length of s
 */

int _strlen_recursion(char *s)
{
	int c = 0;

	if (*s)
	{
		c++;
		c += _strlen_recursion(s + 1);
	}

	return (c);
}
