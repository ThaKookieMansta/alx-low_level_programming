#include "lists.h"

/**
 * print_listint_safe - A function that prints a listint_t linked list
 * @head: The list pointer
 * Return: The number of nodes
 * Exits with 98 on failure
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t elements = 0;
	const listint_t *first = head, *second = head;

	if (head == NULL)
	{
		exit(98);
	}

	while (first && second && second->next && head)
	{
		first = first->next;
		second = second->next->next;
		if (first == second)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		elements++;
	}
	head = NULL;
	return (elements);
}
