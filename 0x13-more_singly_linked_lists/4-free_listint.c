#include "lists.h"
#include <stdio.h>
/**
 * free_listint - Free the memory for linked list
 * @head: First node of the linked list or head node
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}

