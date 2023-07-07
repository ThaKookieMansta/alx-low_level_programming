#include "hash_tables.h"


/**
 * hash_table_get -A function that retrieves a value associated with a key.
 * @ht: A pointer to the hash table.
 * @key: The key of the value.
 * Return: The value associated to key, or NULL if key was not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ind = 0;
	char *value = NULL;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);
	else if (strlen(key) == 0)
		return (NULL);

	ind = key_index((unsigned char *)key, ht->size);
	if ((ht->array)[ind] == NULL)
		return (NULL);

	node = ht->array[ind];
	while (!value)
	{
		if (strcmp(node->key, key) == 0)
			value = node->value;
		node = node->next;
	}
	return (value);
}
