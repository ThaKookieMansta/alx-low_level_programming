#include "lists.h"

/**
 * reverse_listint - A function that reverses a linked list
 * @head: The list pointer
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previousNode = NULL, *nextNode;

	if (*head == NULL)
	{
		return (NULL);
	}

	while (*head)
	{
		nextNode = (*head)->next;
		(*head)->next = previousNode;
		previousNode = *head;
		*head = nextNode;
	}
	*head = previousNode;
	return (*head);
}
