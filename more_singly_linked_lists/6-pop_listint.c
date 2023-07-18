#include "lists.h"

/**
 * pop_listint -  Deletes head node and prints data
 * @head: Node to be deleted
 * Return: head's data or 0 if list empty
 */

int pop_listint(listint_t **head)
{
	lintint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);

	tmp = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (data);
}
