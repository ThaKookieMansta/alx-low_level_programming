#include "lists.h"

/**
 * delete_dnodeint_at_index - A function that deletes the node at
 * index index of a dlistint_t linked list
 * @head: The pointer to the head of the linked list
 * @index: The index of the node
 * Return: 1 if succeeded, -1 if failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temporary_list = NULL;
	unsigned int n = 0;

	if (!head || !(*head))
	{
		return (-1);
	}
	else
	{
		temporary_list = *head;
		while (index != n++ && temporary_list)
		{
			temporary_list = temporary_list->next;
		}
		if (!temporary_list)
		{
			return (-1);
		}
		if (temporary_list->next)
		{
			temporary_list->next->prev = temporary_list->prev;
		}
		if (index == 0)
		{
			*head = temporary_list->next;
		}
		else
		{
			temporary_list->prev->next = temporary_list->next;
		}
		free(temporary_list);
		return (1);
	}
	return (-1);
}
