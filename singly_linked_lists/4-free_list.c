#include "lists.h"

/**
 * free_list - Frees the allocated memory for a linked list
 * @head: pointer to start of linked list
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
