#include "lists.h"

/**
 * free_listint2 - A function that frees a list while setting the
 * head to NULL
 * @head: The list pointer
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temporaryHead;

	if (head == NULL)
	{
		return;
	}

	temporaryHead = *head;
	while (*head)
	{
		temporaryHead = *head;
		(*head) = (*head)->next;
		free(temporaryHead);
	}
	*head = NULL;
}
