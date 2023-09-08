#include "hash_tables.h"

/**
 * hash_table_get - Get a vlaue at key from hash table
 * @ht: Hash table struct
 * @key: The key to retrive the value at in the hash table
 *
 * Return: Return the value associated with the key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node = NULL;

	index = key_index((unsigned const char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
