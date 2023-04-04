#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - get node at index of a linked list
 * @head: First node of the linked list or head node
 * @index: int index to get node from
 *
 * Return: listint_t node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	size_t count = 0;

	current = head;
	while (current != NULL)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}

	return (NULL);
}

