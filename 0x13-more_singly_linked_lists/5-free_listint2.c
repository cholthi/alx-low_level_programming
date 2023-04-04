#include "lists.h"
#include <stdio.h>
/**
 * free_listint2 - Free the memory for linked list 2
 * @head: First node of the linked list or head node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}

