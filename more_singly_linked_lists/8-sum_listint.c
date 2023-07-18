#include "lists.h"

/**
 * sum_listint - adds all data of list
 * @head: start of list
 * Return: sum of all data or 0 if empty
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
