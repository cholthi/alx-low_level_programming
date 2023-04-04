#include "lists.h"
#include <stdio.h>
/**
 * listint_len - Prints nodes of a linked list
 * @h: First node of the linked list or head node
 *
 * Return: size_it number nodes  in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}

