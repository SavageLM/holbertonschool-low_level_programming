#include "lists.h"

/**
 * add_dnodeint_end - addes node to end of a list
 * @head: pointer to head of list
 * @n: value to be added to new node
 * Return: address of new node or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *old;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}

	newnode-n = n;
	newnode->next = NULL;

	old = *head;
	while (old->last != NULL)
		old = old->next;

	old->next = newnode;
	newnode->prev = old;

	return (newnode);
}
