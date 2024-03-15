#include "main.h"

/**
 * malloc_checked - Write a function that allocates memory using malloc.
 *
 * @b: int
 *
 * Return: null
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
