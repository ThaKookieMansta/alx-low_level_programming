#include "lists.h"

/**
 * get_dnodeint_at_index - A function that returns the nth node
 * of a dlistint_t linked list.
 * @head: The pointer to the head of the list
 * @index: The index of the node starting from 0
 * Return: Null if node doesn't exist
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head)
	{
		if (n++ == index)
		{
			break;
		}
		head = head->next;
	}
	return (head);
}
