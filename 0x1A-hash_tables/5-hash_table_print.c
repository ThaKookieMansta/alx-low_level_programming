#include "hash_tables.h"


int not_last_node(const hash_table_t *ht, hash_node_t *node);

/**
 * hash_table_print - prints the contents of a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int li = 0, last_position = 0;
	hash_node_t *node = NULL;

	if (ht == NULL)
		return;
	putchar('{');
	if (ht)
	{
		for (; li < ht->size - 1; li++)
		{
			if (ht->array[li] != NULL)
				last_position = li;
		}

		for (li = 0; li <= last_position; li++)
		{
			node = ht->array[li];
			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (li < last_position - 1)
					printf(", ");
			}

		}
	}
	printf("}\n");
}
