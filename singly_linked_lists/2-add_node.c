#include "lists.h"

/**
 * add_node - Adds a node to a list
 * @head: pointer to beginning of list
 * @str: string to duplicated and stored
 * Return: Returns address of new node, or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *newlist;

	newlist = malloc(sizeof(list_t));

	if ((newlist == NULL) || (str == NULL))
		return (NULL);

	for (i = 0; str[i];)
		i++;

	newlist->str = strdup(str);
	newlist->len = i;
	newlist->next = *head;

	*head = newlist;

	return (newlist);
}
