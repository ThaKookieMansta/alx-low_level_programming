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
	dlistint_t *new_element = NULL, *temporary = NULL;
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
		temporary = *h;
		while (idx != n++ && temporary)
			temporary = temporary->next;
		if (temporary->next)
			new_element->prev = temporary->prev;
		else
			new_element->prev = temporary;
		if (idx == n)
			temporary->next = new_element, new_element->prev = temporary;
		else if (idx == n - 1)
		{
			if (temporary->prev)
				temporary->prev->next = new_element;
			else
				*h = new_element;
			temporary->prev = new_element;
			new_element->next = temporary;
		}
		else
		{
			free(new_element);
			return (NULL);
		}
	}
	return (new_element);
}
