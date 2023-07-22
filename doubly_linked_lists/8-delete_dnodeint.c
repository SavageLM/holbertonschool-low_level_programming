#include "lists.h"

/**
 * delete_dnodeint_at_index - does what it says
 * @head: pointer to start of list
 * @index: index of node to be deleted
 * Return: 1 on success, -1 on fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	for (i = 0; i < index; i++)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}

	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next == NULL)
			tmp->next->prev = tmp->prev;
	}

	free(tmp);
	return (1);
}
