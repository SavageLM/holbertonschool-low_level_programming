#include "lists.h"

/**
 * get_nodeint_at_index - Does what it says
 * @head: start of list
 * @index: index of desired node
 * Return: Returns node at index or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int checker;

	for (checker = 0; checker < index; checker++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
