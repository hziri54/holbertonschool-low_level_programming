#include "lists.h"

/**
 * add_dnodeint_end - Adds new node in the end
 *
 * @head: the og list
 *
 * @n: int to add node
 *
 * Return: new list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *last;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;

	if (*head == NULL)
	{
		tmp->prev = NULL;
		*head = tmp;
		return (tmp);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = tmp;
	tmp->prev = last;

	return (tmp);
}
