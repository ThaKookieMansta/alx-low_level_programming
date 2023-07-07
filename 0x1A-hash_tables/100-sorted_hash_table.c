#include "hash_tables.h"

/**
 * shash_table_create - A function that creates a sorted hash table.
 * @size: The size of hash table.
 * Return: A pointer to the new hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned long int li;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->shead = NULL;
	new_table->stail = NULL;
	new_table->array = malloc(sizeof(shash_node_t) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (li = 0; li < size; li++)
	{
		new_table->array[li] = NULL;
	}
	return (new_table);
}

/**
 * create_shash_node - creates a node for the sorted hash table
 * @key: key for the data
 * @value: data to be stored
 * Return: pointer to the new node, or NULL on failure
 */
shash_node_t *create_shash_node(const char *key, const char *value)
{
	shash_node_t *new_node;

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->next = new_node->snext = new_node->sprev = NULL;
	return (new_node);
}

/**
 * add_to_sorted_list - add a node to the sorted
 * @table: the sorted hash table
 * @node: the node to add
 * Return: void
 */
void add_to_sorted_list(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *temp_node;

	if (table->shead == NULL && table->stail == NULL)
	{
		table->shead = table->stail = node;
		return;
	}
	temp_node = table->shead;
	while (temp_node != NULL)
	{
		if (strcmp(node->key, temp_node->key) < 0)
		{
			node->snext = temp_node;
			node->sprev = temp_node->sprev;
			temp_node->sprev = node;
			if (node->sprev != NULL)
				node->sprev->snext = node;
			else
				table->shead = node;
			return;
		}
		temp_node = temp_node->snext;
	}
	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
}

/**
 * shash_table_set - A function that adds an element to the hash table.
 * @ht: A pointer to hash table.
 * @key: The key to set.
 * @value: The value to set.
 * Return: 1 on success, or 0 on failure.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind;
	char *new_value;
	shash_node_t *new_node, *temp_node;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	ind = key_index((const unsigned char *)key, ht->size);
	temp_node = ht->array[ind];
	while (temp_node != NULL)
	{
		if (strcmp(temp_node->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(temp_node->value);
			temp_node->value = new_value;
			return (1);
		}
		temp_node = temp_node->next;
	}
	new_node = make_shash_node(key, value);
	if (new_node == NULL)
		return (0);
	new_node->next = ht->array[ind];
	ht->array[ind] = new_node;
	add_to_sorted_list(ht, new_node);
	return (1);
}

/**
 * shash_table_get - A function that retrieves a value associated with a key.
 * @ht: A pointer to the hash table.
 * @key: The key of the value.
 * Return: The value associated to key, or NULL if key was not found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int ind;
	shash_node_t *temp_node;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);
	ind = key_index((const unsigned char *)key, ht->size);
	temp_node = ht->array[ind];
	while (temp_node != NULL)
	{
		if (strcmp(temp_node->key, key) == 0)
			return (temp_node->value);
		temp_node = temp_node->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints the contents of a hash table
 * @ht: hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp_node;
	char flag = 0; 

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	temp_node = ht->shead;
	while (temp_node != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", temp_node->key, temp_node->value);
		flag = 1;
		temp_node = temp_node->snext;
	}
	printf("}\n");
}


/**
 * shash_table_print_rev - prints a sorted hash table in reverse
 * @ht: hash table to print
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp_node;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	temp_node = ht->stail;
	while (temp_node != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", temp_node->key, temp_node->value);
		flag = 1;
		temp_node = temp_node->sprev;
	}
	printf("}\n");
}



/**
 * shash_table_delete - A function that deletes a hash table.
 * @ht: The pointer to hash table.
 *Return: Nothing.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int li = 0;
	shash_node_t *next_node = NULL; 

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;

	for (li = 0; li < ht->size; li++)
	{
		while (ht->array[li] != NULL)
		{
			next_node = ht->array[li]->next;
			free(ht->array[li]->key);
			free(ht->array[li]->value);
			free(ht->array[li]);
			ht->array[li] = next_node;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->shead = ht->stail = NULL;
	ht->size = 0;
	free(ht);
}
