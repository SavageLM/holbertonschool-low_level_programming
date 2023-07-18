#include "lists.h"

/**
 * delete_nodeint_at_index -  does what it says
 * @head: start of list
 * @index: where to delete node
 * Return: 1 on success, or -1 on fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *copy = *head;
	unsigned int counts;

	if (*head == NULL)
		return  (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (counts = 0; counts < (index - 1); counts++)
	{
		if (copy->next == NULL)
			return (-1);
		copy = copy->next;
	}

	tmp = copy->next;
	copy = tmp->next;
	free(tmp);
	return (1);
}
