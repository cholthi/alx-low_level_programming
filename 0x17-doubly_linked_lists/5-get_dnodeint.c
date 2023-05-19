#include "lists.h"

/**
 * get_dnodeint_at_index - Get node at the index of dlistint_t list
 * @head: Head node of the dlistint_t list
 * @index: Index to get the node at
 *
 * Return: Returns NULL if node does not exit or node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}


	return (head);
}
