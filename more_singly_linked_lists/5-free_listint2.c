#include "lists.h"

/**
 * free_listint2 - Frees a list and sets head to NULL
 * @head: head of list to free
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while ( *head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL
}
