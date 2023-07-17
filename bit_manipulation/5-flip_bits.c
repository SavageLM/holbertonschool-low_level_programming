#include "main.h"

/**
 * flip_bits - function to flip a given bit
 * @n: number
 * @m: number to flip to
 * Return: number of bits needed to flip n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int check = n ^ m, bits = 0;

	while (check > 0)
	{
		bits += (check & 1);
		check >>= 1;
	}

	return (bits);
}
