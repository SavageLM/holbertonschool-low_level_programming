#include "lists.h"

/**
 * listint_len - Function to get len of list
 * @h: list to count
 * Return: returns number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t listlen;

	for (listlen = 0; h != NULL; listlen++)
		h = h->next;
	return (listlen);
}
