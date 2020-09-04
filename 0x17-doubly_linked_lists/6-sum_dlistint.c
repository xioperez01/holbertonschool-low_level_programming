#include "lists.h"

/**
 *sum_dlistint - function that returns the sum of all the
 *data (n) of a dlistint_t linked list.
 *@head: Linkend list
 *Return: returns the sum of all the data (n) of a list if
 *the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
