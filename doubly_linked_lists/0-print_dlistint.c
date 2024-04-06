#include "lists.h"

/**
 * print_dlistint - Write a function that printsthe elements of a dlist_t list.
 * @h: list
 *
 * Return: Element of a list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t tmp = 0;

	while (h)
	{
		tmp++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (tmp);
}
