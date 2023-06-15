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
	dlistint_t *new_element = NULL, *curr_element = NULL;
	unsigned int num = 0;

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
		curr_element = *h;
		while (idx != num++ && curr_element->next)
			curr_element = curr_element->next;
		if (curr_element->next)
			new_element->prev = curr_element->prev;
		else
			new_element->prev = curr_element;
		if (idx == num)
			curr_element->next = new_element, new_element->prev = curr_element;
		else if (idx == num - 1)
		{
			if (curr_element->prev)
				curr_element->prev->next = new_element;
			else
				*h = new_element;
			curr_element->prev = new_element;
			new_element->next = curr_element;
		}
		else
		{
			free(new_element);
			return (NULL);
		}
	}
	return (new_element);
}
