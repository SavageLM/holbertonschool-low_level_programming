#include "lists.h"

/**
 * sum_dlistint - sums all data in a list
 * @head: pointer to start of list
 * Return: returns sum of all data, or 0
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (total);

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
