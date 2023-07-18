#include "lists.h"

/**
 * print_listint - prints a all nodes of a list
 * @h: list to be printed
 * Return: returns number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t numnode;

	for (numnode = 0; h != NULL; numnode++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (numnode);
}
