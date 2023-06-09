#include <stdio.h>
#include "main.h"

/**
 * *cap_string - entry to function
 * @str: string to be checked
 * Return: returns changed string
 */

char *cap_string(char *str)
{
	int i = 0, m = 0;

	char s[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', '\t', " "};

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 97) && (str[i] <= 122))
		{
			for (m = 0; m < 13; m++)
			{
				if (str[i - 1] == s[m])
					str[i] = str[i] - 32;
			}
		}
	}

	return (str);

}
