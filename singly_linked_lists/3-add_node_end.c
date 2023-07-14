#include "lists.h"

/**
 * add_node_end - adds a node to the end of a linked list
 * @head: start of list
 * @str: string to be duplicated
 * Return: returns address of new node or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newend, *oldend;
	int i;

	newend = malloc(sizeof(list_t));

	if ((newend == NULL) || (str == NULL))
		return (NULL);

	for (i = 0; str[i];)
		i++;

	newend->str = strdup(str);
	newend->len = i;
	newend->next = NULL;

	if (*head == NULL)
		*head = newend;
	else
	{
		oldend = *head;
		while (oldend->next != NULL)
			oldend = oldend->next;
		oldend->next = newend;
	}

	return (newend);
}


