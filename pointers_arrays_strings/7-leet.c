#include <stdio.h>
#include "main.h"

/**
 * *leet - entry to function
 * @str: string to be checked
 * Return: returns changed string
 */

char *leet(char *str)
{
	int i = 0, c = 0;

	char A1[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L', '\0'};
	char A2[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1', '\0'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (c = 0; A1[c] != '\0'; c++)
		{
			if (str[i] == A1[c])
				str[i] = A2[c];
		}
	}

	return (str);

}
