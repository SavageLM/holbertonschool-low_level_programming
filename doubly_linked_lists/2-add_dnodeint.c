#include "lists.h"

/**
 * add_dnodeint - adds a new node to beginning of list
 * @head: pointer to start of list
 * @n: value of new node
 * Return: address of node or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlisting_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	if (*head != NULL)
		(*head)->prev = newnode;
	*head = newnode;

	return (newnode);
}
