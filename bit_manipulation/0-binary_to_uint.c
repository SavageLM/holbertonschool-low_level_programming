#include "main.h"

/**
 * binary_to_uint - Function to convert binary to unsigned int.
 * @b: binary to be converted
 * Return: Returns converted number or NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, converter = 1, exponet = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if ((b[i] != 0) || (b[i] != 1))
			return (0);
	}

	for (i -= 1; i >= 0; i--)
	{
		exponet += (b[i] - '0') * converter;
		converter *= 2;
	}


	return (converter);
}
