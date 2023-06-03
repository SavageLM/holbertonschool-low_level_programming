#include <stdio.h>
#include "main.h"

/**
 * int_strlen - entry to function
 * @s: string to be counted
 */

int _strlen(char *s)
{
	int len;

	while ( *s != '\0')
	{
		len++;
		s++;
	}

	return len;
}
