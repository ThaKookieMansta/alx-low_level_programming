#include "lists.h"

/**
 * free_listint_safe - A function that frees a list
 * @h: The list pointer
 * Return: The size of the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t listSize = 0;
	listint_t *temporaryPointer;

	temporaryPointer = *h;
	while (temporaryPointer)
	{
		temporaryPointer = *h;
		temporaryPointer = temporaryPointer->next;
		free_list(temporaryPointer);
		listSize++;
	}
	*h = NULL;

	return (listSize);
}

/**
 * free_list - A function that frees a listint_t recursively
 * @head: The list pointer
 * Return: Nothing
 */
void free_list(listint_t *head)
{
	listint_t *temporaryPointer;

	if (head)
	{
		temporaryPointer = head;
		temporaryPointer = temporaryPointer->next;
		free(temporaryPointer);
		free_list(temporaryPointer);
	}
	free(head);
}
