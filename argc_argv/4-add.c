#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main- entry to function
 * @argc: numb er of arguemnets passed
 * @argv: array of arguements
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int add1, add2, sum = 0;

	for (add1 = 1; add1 < argc; add1++)
	{
		for add2 = 0; argv[add1][add2]; add2++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[add1]);
	}

	printf("%d\n", sum);

	return (0);
}
