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
	size_t count = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	current = *head;
	while (current != NULL)
	{
		if (count == idx)
		{
			new->next = current;
			new->n = n;
			prev->next = new;

			return (new);
		}
		prev = current;
		current = current->next;
		count++;
	}

	return (NULL);
}

