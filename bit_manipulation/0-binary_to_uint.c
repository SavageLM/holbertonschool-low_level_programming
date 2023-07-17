#include "main.h"

/**
 * binary_to_uint - Function to convert binary to unsigned int.
 * @b: binary to be converted
 * Return: Returns converted number or NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int converter = 1, exponet = 0;
	int i, c = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		c++;

	for (c -= 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);

		exponet += (b[c] - '0') * converter;
		converter *= 2;
	}


	return (converter);
}
