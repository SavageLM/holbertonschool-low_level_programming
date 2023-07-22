#include "lists.h"

/**
 * insert_dnodeint_at_index - does what it says
 * @idx: index to insert new node at
 * @n: value to give new node
 * @h: pointer to start of list
 * Return: address of new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *newnode;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; i < idx; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	if (tmp->next == NULL)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = tmp;
	newnode->next = tmp->next;
	tmp->next->prev = newnode;
	tmp->next = newnode;

	return (newnode);
}
