#include "lists.h"

/**
 * print_list - Prints all elements of a list
 * @h: pointer to a linked list
 * Return: Returns the number of nodes in h
 */

size_t print_list(const list_t *h)
{
	size_t numnode;

	for (numnode = 0, h != NULL, numnode++)
	{
		if (h->str ==NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (numnode);
}
