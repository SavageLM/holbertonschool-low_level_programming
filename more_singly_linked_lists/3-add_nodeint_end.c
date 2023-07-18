#include "lists.h"

/**
 * add_nodeint_end - adds node to end of list
 * @head: head of list
 * @n: node to add
 * Return: returns address of new node or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *NewEnd, *OldEnd;

	NewEnd = malloc(sizeof(listint_t));
	if (NewEnd == NULL)
		return (NULL);

	NewEnd->n = n;
	NewEnd->next = NULL;

	if (*head == NULL)
		*head = NewEnd;
	else
	{
		OldEnd = *head;
		while (OldEnd->next != NULL)
			OldEnd = OldEnd->next;
		OldEnd->next = NewEnd;
	}
	return (*head);
}
