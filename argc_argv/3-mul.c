#include <stdio.h>
#include "main.h"

/**
 * main- entry to function
 * @argc: numb er of arguemnets passed
 * @argv: array of arguements
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int fact1, fact2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	fact1 = atoi(argv[1]);
	fact2 = atoi(argv[2]);
	prod = fact1 * fact2;

	printf("%d\n", prod);

	return (0);
}
