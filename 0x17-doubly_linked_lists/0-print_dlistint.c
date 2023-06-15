#include "lists.h"

/**
 * print_dlistint - A function that prints all the elements of
 * a double linked list
 * @h: A pointer to the head of the double linked list
 * Return: The number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *temporary_list;

	temporary_list = h;
	while (temporary_list)
	{
		printf("%d\n", temporary_list->n);
		temporary_list = temporary_list->next;
		nodes++;
	}
	return (nodes);
}
