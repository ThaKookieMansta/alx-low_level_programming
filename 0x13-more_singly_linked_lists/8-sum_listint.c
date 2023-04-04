#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all the data (n) of a
 * listint_t linked list.
 * @head: The list pointer
 * Return: The sum of all the data
 */
int sum_listint(listint_t *head)
{
	int summation = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head)
	{
		summation += head->n;
		head = head->next;
	}
	return (summation);
}
