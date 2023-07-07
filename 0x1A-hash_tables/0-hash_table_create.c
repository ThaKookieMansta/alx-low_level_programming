#include "hash_tables.h"


/**
 * hash_table_create - A function that creates a hash table.
 * @size: The size of the array.
 * Return: A pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int li = 0;
	hash_table_t *new_table = NULL;

	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}
	for (; li < size; li++)
		(new_table->array)[li] = NULL;
	return (new_table);
}
