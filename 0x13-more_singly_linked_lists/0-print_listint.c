#include "lists.h"

/**
 * print_listint - A function that prints all the elements in the list
 * @h: A pointer to listint
 * Return: the number of elements.
 */
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		elements++;
	}
	return (elements);
}
