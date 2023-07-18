#include "lists.h"

/**
 * insert_nodeint_at_index - does what it says
 * @head: start of list
 * @idx: where to insert node
 * @n: node to insert
 * Return: address of new node or NULL on fail
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp = *head;
	unsigned int counter;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = tmp;
		*head = new;
		return (new);
	}

	for (counter = 0; counter < (idx - 1); counter++)
	{
		if ((tmp == NULL) || (tmp->next == NULL))
			return (NULL);
		tmp = tmp->next;
	}
	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
