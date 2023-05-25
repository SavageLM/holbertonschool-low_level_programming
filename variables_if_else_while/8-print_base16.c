#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;
	int i;

	for (i = 0; i <= 9 ; i++)
	{
		putchar('0' +i);
	}

	for (alpha = 'a'; alpha <= 'f' ; alpha++)
	{
		putchar(alpha);
	}

	{
		putchar('\n');
	}

	return (0);
}
