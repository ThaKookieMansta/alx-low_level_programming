#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a list
 * and returns the head node's data n.
 * @head: The list pointer
 * Return: The head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *newHead;
	int oldHead;

	if (*head == NULL)
		return (0);

	oldHead = (*head)->n;
	newHead = (*head)->next;
	free(*head);
	*head = newHead;
	return (oldHead);
}
