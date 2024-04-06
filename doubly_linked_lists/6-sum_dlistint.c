#include "lists.h"

/**
 * sum_dlistint - Sum of the list
 *
 * @head: head of the list
 *
 * Return: ..
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
