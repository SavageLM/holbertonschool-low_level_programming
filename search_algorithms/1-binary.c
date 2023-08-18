#include "search_algos.h"

/**
 * binary_search - Function that searches an array binarily
 * @array: Sorted array to search
 * @size: size of array
 * @value: value to search for
 * Return: index of value, or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t min = 0, max = size - 1, mid;

	if (array == NULL || size == 0)
		return (-1);

	print_search(array, min, max);

	while (min <= max)
	{
		mid = (min + max) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			max = mid - 1;
		else
			min = mid + 1;
		print_search(array, min, max);
	}
	return (-1);
}

/**
 * print_search - prints array to be searched
 * @array: array to print
 * @min: starting size of array
 * @max: max size of array
 */

void print_search(int *array, size_t min, size_t max)
{
	size_t i;

	i = min;
	if (i > max)
		return;

	printf("Searching in array: ");
	for (; i <= max; i++)
	{
		if (i > min)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}
