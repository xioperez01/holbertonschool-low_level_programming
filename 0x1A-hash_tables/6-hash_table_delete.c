#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: is the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node, *next;

	if (!ht)
		return;

	if (!(ht->array))
	{
		free(ht);
		return;
	}

	while (i < ht->size)
	{
		node = (ht->array)[i];

		while (node)
		{
			next = node->next;

			if (node->key)
				free(node->key);

			if (node->value)
				free(node->value);

			node->key = NULL;
			node->value = NULL;
			free(node);
			node = next;
		}
		i++;
	}

	free(ht->array);
	free(ht);
}
