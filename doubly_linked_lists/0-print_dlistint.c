#include "lists.h"

/**
 * print_dlistint - prints elements of the list
 * @h: list to be printed
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t total = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		total++;
	}
	return (total);
}
