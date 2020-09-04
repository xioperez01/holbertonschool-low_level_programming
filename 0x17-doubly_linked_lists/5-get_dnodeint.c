#include "lists.h"

/**
 *get_dnodeint_at_index- function that returns the nth node of a
 *dlistint_t linked list.
 *@head: Linked list
 *@index: is the index of the node, starting from 0
 *Return: returns the nth node or if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node_index = malloc(sizeof(dlistint_t));
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	temp = head;

	if (i > index)
		return (NULL);

	for (i = 0; i <= index; i++)
	{
		temp++;
		if (i == index)
			node_index = temp;
	}

	return (node_index);
}
