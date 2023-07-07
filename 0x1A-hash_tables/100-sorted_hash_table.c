#include "hash_tables.h"

/**
 * shash_table_create - A function that creates a sorted hash table.
 * @size: The size of hash table.
 * Return: A pointer to the new hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int li = 0;
	shash_table_t *new_table = NULL;

	new_table = malloc(sizeof(shash_table_t));
	if (!new_table)
		return (NULL);
	new_table->size = size;
	new_table->shead = NULL;
	new_table->stail = NULL;
	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}
	for (; li < size; li++)
		(new_table->array)[li] = NULL;
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
	shash_node_t *shn;

	shn = malloc(sizeof(shash_node_t));
	if (shn == NULL)
		return (NULL);
	shn->key = strdup(key);
	if (shn->key == NULL)
	{
		free(shn);
		return (NULL);
	}
	shn->value = strdup(value);
	if (shn->value == NULL)
	{
		free(shn->key);
		free(shn);
		return (NULL);
	}
	shn->next = shn->snext = shn->sprev = NULL;
	return (shn);
}

/**
 * add_to_sorted_list - add a node to the sorted
 * @table: the sorted hash table
 * @node: the node to add
 * Return: void
 */
void add_to_sorted_list(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *tmp;

	if (table->shead == NULL && table->stail == NULL)
	{
		table->shead = table->stail = node;
		return;
	}
	tmp = table->shead;
	while (tmp != NULL)
	{
		if (strcmp(node->key, tmp->key) < 0)
		{
			node->snext = tmp;
			node->sprev = tmp->sprev;
			tmp->sprev = node;
			if (node->sprev != NULL)
				node->sprev->snext = node;
			else
				table->shead = node;
			return;
		}
		tmp = tmp->snext;
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
	unsigned long int ind = 0;
	char *value_data = NULL, *key_data = NULL;
	shash_node_t *new_node = NULL, *tmp_node = NULL;

	if (!ht || !key || !value)
		return (0);
	else if (strlen(key) == 0)
		return (0);
	value_data = strdup(value);
	key_data = strdup(key);
	new_node = malloc(sizeof(shash_node_t));
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

/**
 * shash_table_get - A function that retrieves a value associated with a key.
 * @ht: A pointer to the hash table.
 * @key: The key of the value.
 * Return: The value associated to key, or NULL if key was not found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int ind = 0;
	char *value = NULL;
	shash_node_t *node;

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

/**
 * shash_table_print - prints the contents of a hash table
 * @ht: hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int li = 0, last_pos = 0;
	shash_node_t *node = NULL;

	if (ht == NULL)
		return;
	putchar('{');
	if (ht)
	{
		for (; li < ht->size - 1; li++)
		{
			if (ht->array[li] != NULL)
				last_pos = li;
		}

		for (li = 0; li <= last_pos; li++)
		{
			node = ht->array[li];
			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (li < last_pos - 1)
					printf(", ");
			}

		}
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
	shash_node_t *tmp;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	tmp = ht->stail;
	while (tmp != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		flag = 1;
		tmp = tmp->sprev;
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
	shash_node_t *next_node = NULL, *node = NULL;

	if (!ht)
		return;

	if (ht->array)
	{
		for (; li < ht->size; li++)
		{
			if (ht->array[li] != NULL)
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
