#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - Remove the first node and return its value
 * @head: First node of the linked list or head node
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *next;
	int ret;

	if (head == NULL)
		return (0);

	ret = (*head)->n;

	if ((*head)->next == NULL)
	{
		free(*head);
		return (ret);
	}

	next = (*head)->next;
	free(*head);
	*head = next;

	return (ret);
}

