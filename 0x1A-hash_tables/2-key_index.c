/**
 * key_index - Returns the index of the hash_node_t key
 * @key: The hash_node_t key to hash
 * @size: Size of the hashtable hash_table_t
 *
 * Return: int index of the hash_node_t
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int hash;

	hash = hash_djb2(key);
	index = (unsigned long int) hash & (unsigned long int)(size - 1);

	return (index);
	
}
