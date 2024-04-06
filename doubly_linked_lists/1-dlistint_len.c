#include "lists.h"

/**
 * dlistint_len - Write a function that returns the number of list.
 *
 * @h: list
 *
 * Return: the number of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
