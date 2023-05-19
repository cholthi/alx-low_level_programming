#include "lists.h"

/**
 * sum_dlistint - Sums the values of the dlistint_t list
 * @head: Head node of the dlistint_t list
 *
 * Return: int Sums of all values dlistiint_t list
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
