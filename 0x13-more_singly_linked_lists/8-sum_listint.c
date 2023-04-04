#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - sum data of linked list
 * @head: First node of the linked list or head node
 *
 * Return: int
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	size_t sum = 0;

	if (head == NULL)
		return (0);

	current = head;
	while (current != NULL)
	{
		current = current->next;
		sum += current->n;
	}

	return (sum);
}

