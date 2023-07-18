#include "lists.h"

/**
 * free_listint - FUnction to free a list
 * @head: POinter to Start of list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
