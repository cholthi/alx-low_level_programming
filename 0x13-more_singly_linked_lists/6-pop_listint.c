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
	listint_t *cur;
	int ret;

	if (*head == NULL)
		return (0);

	ret = (*head)->n;

	cur = *head;
	*head = (*head)->next;

	free(cur);

	return (ret);
}

