#include "lists.h"

/**
 * add_dnodeint - A function that adds a new node at the beginning of
 * a doubly linked list
 * @head: A double pointer to the head of the doubly linked list
 * @n: The value of the node to be added
 * Return: The address of the new element if passed
 *			Null if failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_element = NULL, *temporary_list = NULL;

	new_element = malloc(sizeof(dlistint_t));

	if (!new_element)
	{
		free(new_element);
		return (NULL);
	}

	new_element->next = NULL;
	new_element->prev = NULL;
	new_element->n = n;

	if (!head || !(*head))
	{
		*head = new_element;
		return (new_element);
	}
	else
	{
		temporary_list = *head;
		temporary_list->prev = new_element;
		*head = new_element;
		new_element->next = temporary_list;
		return (new_element);
	}
	return (NULL);
}
