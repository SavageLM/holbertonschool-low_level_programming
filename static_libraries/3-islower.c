#include <stdio.h>
#include "main.h"

/**
 * _islower - Entry point
 * Return: Return 0 if successful
 * @c: input to check
 */

int _islower(int c)
{

	if ((c > 96) && (c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
