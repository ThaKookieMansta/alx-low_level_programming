#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth
 * node of a listint_t linked list.
 * @head: The list pointer
 * @index: The nth node on the list to be deleted.
 * Return: A pointer to node at specified index
 * NULL if not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head)
	{
		if (n == index)
		{
			return (head);
		}
		head = head->next;
		n++;
	}
	return (NULL);
}
