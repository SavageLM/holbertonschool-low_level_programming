#include "lists.h"

/**
 * get_dnodeint_at_index - does what it says
 * @head: start of a list
 * @index: index of node to be returned
 * Return: returns a node at index or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
