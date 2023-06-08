#include <stdio.h>
#include "main.h"

/**
 * *string_toupper - entry to function
 * @*str: string to be checked
 * Return: returns changed string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (*str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122))
			str[i] -= 32;

		i++;

	}

	return (*);

}
