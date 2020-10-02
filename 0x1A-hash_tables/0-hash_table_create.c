#include "hash_tables.h"

/**
* hash_table_create - Function that creates a hash table.
* @size: is the size of the array
*Return: a pointer to the newly created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t **array;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t));

	if (!new_table)
		return (NULL);
	array = malloc(sizeof(*array) * size);

	if (!array)
	{
		free(new_table);
		return (NULL);
	}

	while (i < size)
	{
		array[i] = NULL;
		i++;
	}

	new_table->size = size;
	new_table->array = array;

	return (new_table);

}
