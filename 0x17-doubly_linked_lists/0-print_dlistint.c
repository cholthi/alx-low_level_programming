#include "lists.h"

/**
 * print_dlistint - Print the doubly linked list nodes
 * @h: Head node of the doubly linked list
 *
 * Return: size_t number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;


	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
