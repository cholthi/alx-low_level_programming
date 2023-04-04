#include <stdio.h>
#include "lists.h"
/**
 * print_listint - Prints nodes of a linked list
 * @h: First node of the linked list or head node
 *
 * Return: size_it number nodes  in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		printf("%d\n", h->n);
		h = h->next;

	}

	return (len);
}
