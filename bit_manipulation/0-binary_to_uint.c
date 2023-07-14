#include "main.h"

/**
 * binary_to_uint - Function to convert binary to unsigned int.
 * @b: binary to be converted
 * Return: Returns converted number or NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, converter = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != NULL; i++)
	{
		if ((b != 0) || (b != 1))
			return (0);
		if (b[i] == 1)
			converter += 2^i;
	}

	return (converter);
}
