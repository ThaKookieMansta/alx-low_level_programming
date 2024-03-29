#include "hash_tables.h"


/**
 * hash_table_create - A function that creates a hash table.
 * @size: The size of the array.
 * Return: A pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int li;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(size * sizeof(hash_node_t *));
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (li = 0; li < size; li++)
		new_table->array[li] = NULL;
	return (new_table);
}
