#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"

/**
 * array_iterator- function that executes a function on an array
 * @size: size of array
 * @action: Function to be used on array
 * @array: array to be used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if ((array == NULL) || (action == NULL))
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
