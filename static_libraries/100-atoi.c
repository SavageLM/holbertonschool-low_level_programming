#include <stdio.h>
#include "main.h"

/**
 * _atoi - entry to function
 * @s: string to be converted
 * Return: 0 if string contains no int
 */

int _atoi(char *s)
{

	int i = 0, n = 0, sign = 1;

	if (s[i] == '-')
	{
		sign = -1;
		i = 1;
	}

	while (s[i] != '\0')
	{
		if ((s[i] >= '0') && (s[i] <= '9'))
		{
			n = n * 10 + s[i] - '0';
		}

		else
			break;

		i++;

	}

		n = n * sign;
		return (n);
}
