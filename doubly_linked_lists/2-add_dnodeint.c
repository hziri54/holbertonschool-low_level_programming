#include "lists.h"

/**
 * add_dnodeint - Adds new node
 *
 * @head: the og list
 *
 * @n: int to add node
 *
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = *head;

	if (*head != NULL)
		(*head)->prev = tmp;
	*head = tmp;

	return (tmp);
}
