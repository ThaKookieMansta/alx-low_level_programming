#include "lists.h"

/**
 * find_listint_loop - A function that finds the loop in a list
 * @head: List Pointer
 * Return: The address of the node where the loop start, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first = head, *second = head;

	while (first && second && second->next)
	{
		first = first->next;
		second = second->next->next;
		if (first == second)
		{
			return (first);
		}
	}
	return (NULL);
}
