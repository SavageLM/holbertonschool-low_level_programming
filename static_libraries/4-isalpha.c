#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Entry point
 * Return: Return 0 if successful
 * @c: input to check
 */

int _isalpha(int c)
{

	if ((c > 64) && (c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
