#include "lists.h"

/**
 * free_listint - A function that frees a linked list
 * @head: The list pointer
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temporaryHead;

	while (head)
	{
		temporaryHead = head;
		head = head->next;
		free(temporaryHead);
	}
	free(head);
}
