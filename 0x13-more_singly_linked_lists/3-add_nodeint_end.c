#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node to the end of a list
 * @head:The list structure pointer
 * @n: The integer value to be added as the new node
 * Return: The address of the new element.
 * NULL if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temporary;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (*head == NULL)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		newNode->next = NULL;
		temporary = *head;
		while (temporary->next)
		{
			temporary = temporary->next;
		}
		temporary->next = newNode;
	}
	return (newNode);
}
