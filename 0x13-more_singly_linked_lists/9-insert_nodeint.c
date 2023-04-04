#include "lists.h"
#include <stdio.h>
/**
 * insert_nodeint_at_index - insert node at index of a linked list
 * @head: First node of the linked list or head node
 * @idx: int index to get node from
 * @n: data to insert in a node
 *
 * Return: listint_t node at index
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new, *prev;
	size_t count;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	current = *head;

	if (idx == 0)
	{
		new->next = current;
		*head = new;
		return (new);
	}

	for (count = 0; count < (idx - 1); count++)
	{
		if (current == NULL || current->next == NULL)
			return (NULL);

		current = current->next;
	}

	new->next = current->next;
	current->next = new;

	return (new);
}

