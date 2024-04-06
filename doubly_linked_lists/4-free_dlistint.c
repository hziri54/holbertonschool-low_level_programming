#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t.
 *
 * @head: A pointer to list_t
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
