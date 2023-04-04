#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - A function that deletes the node at
 * specified position from list
 * @head: The list pointer
 * @index: The position of the node to delete
 * Return: 1 if succeeded
 * -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temporaryPointer, *dropNode;
	unsigned int i = 1;

	if (*head == NULL)
	{
		return (-1);
	}

	temporaryPointer = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temporaryPointer);
	}
	else
	{
		while (i < index)
		{
			temporaryPointer = temporaryPointer->next;
			if (temporaryPointer == NULL)
			{
				return (-1);
			}
			i++;
		}
		dropNode = temporaryPointer;
		dropNode = dropNode->next;
		temporaryPointer->next = dropNode->next;
		free(dropNode);
	}
	return (1);
}
