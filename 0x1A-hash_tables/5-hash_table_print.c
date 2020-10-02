#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;
	char *coma = "";

	if (!ht || !ht->array)
		return;

	putchar('{');

	while (i < ht->size)
	{
		node = ((ht->array)[i]);

		while (node)
		{
			printf("%s'%s': '%s'", coma, node->key, node->value);
			coma = ", ";
			node = node->next;
		}
		i++;
	}
	puts("}");
}
