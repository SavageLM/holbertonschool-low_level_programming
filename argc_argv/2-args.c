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
	int i;

	for (i = 0; i < argc; i++)
		printf("argv[%2d]: %s\n", i, argv[i]);

	return (0);
}
