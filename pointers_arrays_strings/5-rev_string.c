#include <stdio.h>
#include "main.h"

/**
 * rev_string - entry to function
 * @s: string to be printed
 * Return: returns string length
 */

void rev_string(char *s)
{

	int c = 0, i;
	char tmp;

	for (i = 0; s[i] != '\0'; i++)
	{
		c++;
	}

	for (i = c - 1; i >= c / 2; i--)
	{
		tmp = s[i];
		s[i] = s [c - i - 1];
		s[c - i - 1] = tmp; 
	}

}
