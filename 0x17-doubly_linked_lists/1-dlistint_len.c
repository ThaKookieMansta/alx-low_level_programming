#include "lists.h"

/**
 * dlistint_len - A function that returns the number of elements in
 * a doubly linked list
 *@h: A pointer to the header of the doubly linked list
 *Return: Number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;
	const dlistint_t *temporary_list;

	temporary_list = h;

	while (temporary_list)
	{
		temporary_list = temporary_list->next;
		elements++;
	}
	return (elements);
}
