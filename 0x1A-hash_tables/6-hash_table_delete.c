#include "hash_tables.h"


/**
 * hash_table_delete - A function that deletes a hash table.
 * @ht: The pointer to hash table.
 *Return: Nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int li = 0;
	hash_node_t *next_node = NULL, *node = NULL;

	if (!ht)
		return;

	if (ht->array)
	{
		for (; li < ht->size; li++)
		{
			if (ht->array[li])
			{
				node = ht->array[li];
				while (node)
				{
					next_node = node->next;
					if (node->value)
						free(node->value);
					if (node->key)
						free(node->key);
					free(node);
					node = next_node;
				}
			}
		}
		free(ht->array);
	}
	free(ht);
}
