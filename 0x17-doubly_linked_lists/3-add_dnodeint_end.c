#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of dlistint_t list
 * @head: The head node of the dlistint_t
 * @n: the value of the new node of dlistint_t
 *
 * Return: NULL if failure or a pointor to the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current = *head;


	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (current->next != NULL)
		current = current->next;

	current->next = new;
	new->prev = current;
	new->next = NULL;

	return (new);
}
