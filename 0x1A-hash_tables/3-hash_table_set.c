#include "hash_tables.h"

/**
 * hash_table_set - Store data in the hash table
 * @ht: A pointor to hash table struct
 * @key: The key to insert data to in the hash table
 * @value: Value to insert in the hash table
 *
 * Return: 1 on success else 0 if error
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node = NULL;
	char * dup;


	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	dup = strdup(value);
	if (dup == NULL)
		return (0);
	while (node != NULL)
	{
		if (!strcmp(node->key, key))
		{
			free(node->value);
			node->value = dup;
			return (1);
		}
		node = node->next;
	}
	node = malloc(sizeof(hash_node_t) + strlen(key) + 1);
	if (node  == NULL)
	{
		return (0);
	}
	strcpy(node->key, key);
	node->value = dup;

	/*Add node at the beginning of linked list*/
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);


}

