#include "lists.h"

/**
 *list_len - a function that prints all the elements of a list_t list.
 *@h: linked list
 * Return: number of nodes in linked list
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h && h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
