#include "hash_tables.h"

/**
 * new_node - and insert new node into hash table
 * @ht: hash table
 * @key: key; can't be empty string
 * @value: value
 * @idx: index to insert in at hash table
 * Return: 1 if success, 0 if fail
 */
int new(hash_table_t *ht, const char *key, const char *value,
			unsigned long int idx)
{
	hash_node_t *new = NULL;
	char *key_;
	char *value_;

	new = malloc(sizeof(hash_node_t));

	if (!new)
		return (0);

	key_ = strdup(key);

	if (!key_)
	{
		free(new);
		return (0);
	}

	value_ = strdup(value);

	if (!value_)
	{
		free(key_);
		free(new);
		return (0);
	}

	new->key = key_;
	new->value = value_;

	if ((ht->array)[idx] == NULL)
		new->next = NULL;
	else
		new->next = (ht->array)[idx];

	(ht->array)[idx] = new;

	return (1);
}
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key.
 *Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node = NULL;
	char *value_;

	if (!ht || !(ht->array) || !key || strlen(key) == 0 || !value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	node = (ht->array)[idx];

	while (node && (strcmp(key, node->key) != 0))
		node = node->next;

	if (node != NULL)
	{
		value_ = strdup(value);

		if (!value_)
			return (0);

		if (node->value)
			free(node->value);

		node->value = value_;

		return (1);
	}

	return (new(ht, key, value, idx));
}
