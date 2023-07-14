#include "lists.h"

/**
 * list_len - Function for returning number of element in a linked list
 * @h: list to be counted
 * Return: Returns length of list
 */

size_t list_len(const list_t *h)
{
	size_t listlen;

	for (listlen = 0; h != NULL; listlen++)
		h = h->next;

	return (listlen);
}
