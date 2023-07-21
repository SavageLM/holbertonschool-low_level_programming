#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: pointer to head of list
 */

void free_dlistint(dlistint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
