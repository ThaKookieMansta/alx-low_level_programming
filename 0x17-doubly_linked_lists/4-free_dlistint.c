#include "lists.h"

/**
 * free_dlistint - A function that frees a dlistint_t list
 * @head: The pointer to the head of the list
 * Return: Nothing
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temporary_list;

	while (head)
	{
		temporary_list = head->next;
		free(head);
		head = temporary_list;
	}

}
