#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - A function that inserts a new node
 * at a given position
 * @h: A double pointer to the head
 * @idx: The index of the list for the new node
 * @n: The value of the new node
 * Return: The address of the new node
 *			Null if node cannot be added
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_element = NULL, *current_node = NULL;
	unsigned int n = 0;

	new_element = malloc(sizeof(dlistint_t));
	if (!new_element)
		return (NULL);
	new_element->next = NULL;
	new_element->prev = NULL;
	new_element->n = n;
	if (!h || !(*h))
		*h = new_element;
	else
	{
		current_node = *h;
		while (idx != n++ && current_node->next)
			current_node = current_node->next;
		if (current_node->next)
			new_element->prev = current_node->prev;
		else
			new_element->prev = current_node;
		if (idx == n)
			current_node->next = new_element, new_element->prev = current_node;
		else if (idx == n - 1)
		{
			if (current_node->prev)
				current_node->prev->next = new_element;
			else
				*h = new_element;
			current_node->prev = new_element;
			new_element->next = current_node;
		}
		else
		{
			free(new_element);
			return (NULL);
		}
	}
	return (new_element);
}
