#include "lists.h"

/**
 * list_len - Write a function that returns the number of list.
 *
 * @h: list
 *
 * Return: the number of list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
