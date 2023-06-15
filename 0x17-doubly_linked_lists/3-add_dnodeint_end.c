#include "lists.h"

/**
 * add_dnodeint_end - A function that adds a new node at the end
 * of a doubly linked list
 * @head: The head of the list
 * @n: The value of the new element
 * Return: The address of the new element
 *			Null if failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
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
		while (temporary_list->next)
		{
			temporary_list = temporary_list->next;
		}
		new_element->prev = temporary_list;
		temporary_list->next = new_element;

		return (new_element);
	}
	return (NULL);
}
