#include "lists.h"

/**
 * dlsitint_len - calculates the len of the doubly linked list
 * @h: head node of the linked list
 *
 * Return: size_t the llen of the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while(h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
