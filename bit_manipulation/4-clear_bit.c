#include "main.h"

/**
 * clear_bit - Function to set a bit to 0
 * @n: Binary number
 * @index: given index to start at
 * Return: Returns 1 on success, -1 on fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
