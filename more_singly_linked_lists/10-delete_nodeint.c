#include "lists.h"

/**
 * delete_nodeint_at_index -  does what it says
 * @head: start of list
 * @index: where to delete node
 * Return: 1 on success, or -1 on fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	unsigned int counts;

	if (*head == NULL)
		return  (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		return (1);
	}

	for (counts = 0; counts < (index - 1); counts++)
	{
		if (*head->next == NULL)
			return (-1);
		*head = (*head)->next;
	}

	tmp = (*head)->next;
	*head = tmp->next;
	return (1);
}
