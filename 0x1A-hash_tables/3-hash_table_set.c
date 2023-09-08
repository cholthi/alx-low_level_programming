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
	hash_node_t * node = NULL;


	index = key_index(key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (!strcmp(node->key, key))
		{
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}

	if (node = malloc(sizeof(hash_node_t) + strlen(key) + 1) == NULL)
	{
		return (0);
	}
	strcpy(node->key, key);
	node->value = strdup(value);

	//Add node at the beginning of linked list
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);


}
