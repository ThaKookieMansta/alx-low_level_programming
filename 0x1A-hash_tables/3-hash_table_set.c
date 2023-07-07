#include "hash_tables.h"


/**
 * hash_table_set - A function that adds an element to the hash table.
 * @ht: A pointer to hash table.
 * @key: The key to set.
 * @value: The value to set.
 * Return: 1 on success, or 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind = 0;
	char *value_data = NULL, *key_data = NULL;
	hash_node_t *new_node = NULL, *tmp_node = NULL;

	if (!ht || !key || !value)
		return (0);
	else if (strlen(key) == 0)
		return (0);
	value_data = strdup(value);
	key_data = strdup(key);
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = key_data;
	new_node->value = value_data;
	new_node->next = NULL;
	ind = key_index((unsigned char *)key, ht->size);
	if ((ht->array)[ind] != NULL)
	{
		tmp_node = (ht->array)[ind];
		while (tmp_node)
		{
			if (strcmp(tmp_node->key, key_data) == 0)
			{
				free(ht->array[ind]->value);
				ht->array[ind]->value = value_data;
				free(key_data);
				free(new_node);
				return (1);
			}
			tmp_node = tmp_node->next;
		}
		tmp_node = (ht->array)[ind];
		new_node->next = tmp_node;
		(ht->array)[ind] = new_node;
	}
	else
		(ht->array)[ind] = new_node;
	return (1);
}
