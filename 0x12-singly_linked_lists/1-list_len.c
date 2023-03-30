#include "lists.h"

/**
 * list_len - A function that returns the number
 * of elements in a linked list_t list.
 * @h: head of the linked list
 * Return: number of elements as size_t
 */
size_t list_len(const list_t *h)
{
	unsigned int elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
