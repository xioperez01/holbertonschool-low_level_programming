#include "lists.h"

/**
 *print_dlistint - function that prints all the elements of a dlistint_t list
 *@h: Doubly linked list
 *Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h && h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
