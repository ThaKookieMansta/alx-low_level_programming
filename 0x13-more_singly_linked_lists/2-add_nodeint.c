#include "lists.h"

/**
 * add_nodeint - A function that adds a new node at the begining of a list
 * @head: The list structure pointer
 * @n: The integer value to be added as the new node
 * Return: The address of the new element.
 * NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
	{
		return (NULL);
	}
	(*head)->n = n;
	(*head)->next = newNode;
	return (*head);
}
