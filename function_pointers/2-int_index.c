#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"

/**
 * int_index- function that searches for an int
 * @size: number of elements in array
 * @cmp: function to compare array element to search
 * @array: array to be searched
 * Return: on fail returns -1, or index of matching element on success.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((size <= 0) || (cmp == NULL) || (array == NULL))
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);

	return (-1);
}
