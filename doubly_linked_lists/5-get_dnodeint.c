#include "lists.h"

/**
 * get_dnodeint_at_index - Write a function that returns the nth node.
 *
 * @head: head of list
 *
 * @index: node
 *
 * Return: ..
 *
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
