#include "main.h"

/**
 * get_bit - Function to retrieve value of bit
 * @n: binary number to check
 * @index: index of n, starting at 0
 * Return: value of bit at index, or -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
