#include "lists.h"

/**
 *_strlen - returns the length of a string.
 *@s: sting
 *Return: length
 */

int _strlen(const char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 *add_node_end - a function that adds a new node at the end  of a list_t list.
 *@head: list
 *@str: new node content
 *Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (strdup(str) == NULL)
		return (NULL);
	last = *head;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
	return (new_node);
}
