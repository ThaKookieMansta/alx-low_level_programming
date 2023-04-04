#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts node at given position
 * @head: The list pointer
 * @idx: The given position on the list
 * @n: The value of the new node
 * Return: The address to new node at specified index, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *newNode, *temporaryPointer;

	if (head == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = newNode;
		newNode->next = NULL;
		newNode->n = n;
		return (newNode);
	}
	if (idx == 0)
	{
		newNode->next = *head;
		newNode->n = n;
		*head = newNode;
		return (newNode);
	}
	temporaryPointer = *head;
	while (i < idx)
	{
		temporaryPointer = temporaryPointer->next;
		i++;
	}
	newNode->n = n;
	newNode->next = temporaryPointer->next;
	temporaryPointer->next = newNode;
	return (newNode);
}
