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

	char A1[] = {97,101,111,116,108,65,69,79,84,76};
	char A2[] = {52,51,48,55,49,52,51,48,55,49};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (c = 0; A1[c] !='\0'; c++)
			{
				if (str[i] == A1[c])
					str[i] = A2[c];
			}
	}

	return (str);

}
