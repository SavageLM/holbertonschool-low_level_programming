#include "lists.h"

/**
 * dlistint_len - counts elements of a list
 * @h: list to be counted
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t total = 0;

	while (h)
	{
		h = h->next;
		total++;
	}
	return (total);
}
