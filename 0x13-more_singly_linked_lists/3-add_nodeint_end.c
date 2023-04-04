#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint_end - add node at the end of a linked list
 * @head: First node of the linked list or head node
 * @n: int node value
 *
 * Return: listint_t the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last_node;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	
	else

	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;


		last_node->next = new;

	}

	return (new);
}

